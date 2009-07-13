import validations
from Table import *
from ModuleAuth import *

NOTE_EMPTY = "At least one user/password pair should be configured."

DATA_VALIDATION = []

HELPS = [
    ('modules_validators_authlist', _("Fixed list"))
]

class ModuleAuthlist (ModuleAuthBase):
    PROPERTIES = ModuleAuthBase.PROPERTIES + [
        'list'
    ]

    METHODS = ['basic', 'digest']

    def __init__ (self, cfg, prefix, submit):
        ModuleAuthBase.__init__ (self, cfg, prefix, 'authlist', submit)

    def _op_render (self):
        txt  = ModuleAuthBase._op_render (self)
        txt += "<h2>%s</h2>" % (_('Fixed authentication list'))

        keys = self._cfg.keys('%s!list'%(self._prefix))
        if keys:
            txt += "<h3>%s</h3>" % (_('Authentication list'))
            table = Table(3, 1, style='width="90%"')
            table += (_('User'), _('Password'), '')
            for c in keys:
                pre     = '%s!list!%s'%(self._prefix, c)
                user    = self._cfg.get_val('%s!user'     %(pre))
                passwd  = self._cfg.get_val('%s!password' %(pre))
                rm_link = self.AddDeleteLink ('/ajax/update', pre)
                table += (user, passwd, rm_link)
            txt += self.Indent(table)
        else:
            txt += self.Indent(self.Dialog(NOTE_EMPTY))

        txt += "<h3>%s</h3>" % (_('Add new pair'))
        user_e = self.InstanceEntry ("tmp!new_user", 'text', size=20, req=True)
        pass_e = self.InstanceEntry ("tmp!new_pass", 'text', size=40, req=True)

        table = Table (3, 1)
        table += (_('User'), _('Password'), '')
        table += (user_e, pass_e, SUBMIT_ADD)
        txt += self.Indent(table)

        return txt

    def _op_apply_changes (self, uri, post):
        n_user = post.pop('tmp!new_user')
        n_pass = post.pop('tmp!new_pass')

        del (self._cfg['tmp!new_user'])
        del (self._cfg['tmp!new_pass'])

        if n_user:
            tmp = [int(x) for x in self._cfg.keys('%s!list'%(self._prefix))]
            if tmp:
                tmp.sort()
                next = tmp[-1] + 1
            else:
                next = 1

            self._cfg['%s!list!%d!user'%(self._prefix, next)]     = n_user
            self._cfg['%s!list!%d!password'%(self._prefix, next)] = n_pass

        self.ApplyChanges ([], post, DATA_VALIDATION)
        ModuleAuthBase._op_apply_changes (self, uri, post)
