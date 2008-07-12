HANDLERS = [
    ('',            'None'),
    ('common',      'List & Send'),
    ('file',        'Static content'),
    ('dirlist',     'Only listing'),
    ('redir',       'Redirection'),
    ('cgi',         'CGI'),
    ('fcgi',        'FastCGI'),
    ('scgi',        'SCGI'),
    ('server_info', 'Server Info'),
    ('mirror',      'Generic balancer'),
    ('admin',       'Remote Administration')
]

ERROR_HANDLERS = [
    ('',            'Default errors'),
    ('error_redir', 'Custom redirections')
]

VALIDATORS = [
    ('',         'None'),
    ('plain',    'Plain text file'),
    ('htpasswd', 'Htpasswd file'),
    ('htdigest', 'Htdigest file'),
    ('ldap',     'LDAP server'),
    ('mysql',    'MySQL server'),
    ('pam',      'PAM')
]

VALIDATOR_METHODS = [
    ('basic',        'Basic'),
    ('digest',       'Digest'),
    ('basic,digest', 'Basic or Digest')
]

LOGGERS = [
    ('',           'None'),
    ('combined',   'Apache compatible'),
    ('w3c',        'W3C'),
    ('ncsa',       'NCSA')
]

LOGGER_WRITERS = [
    ('syslog',   'System logger'),
    ('stderr',   'Standard Error'),
    ('file',     'File'),
    ('exec',     'Execute program')
]

BALANCERS = [
    ('round_robin', "Round Robin")
]

BALANCER_TYPES = [
    ('interpreter', 'Local interpreter'),
    ('host',        'Remote host')
]

ENCODERS = [
    ('gzip',     'GZip')
]

THREAD_POLICY = [
    ('',      'Default'),
    ('fifo',  'FIFO'),
    ('rr',    'Round-robin'),
    ('other', 'Dynamic')
]

POLL_METHODS = [
    ('',       'Automatic'),
    ('epoll',  'epoll() - Linux >= 2.6'),
    ('kqueue', 'kqueue() - BSD, OS X'),
    ('ports',  'Solaris ports - >= 10'),
    ('poll',   'poll()'),
    ('select', 'select()'),
    ('win32',  'Win32')
]

REDIR_SHOW = [
    ('1', 'External'),
    ('0', 'Internal')
]

ERROR_CODES = [
    ('400', '400 Bad Request'),
    ('403', '403 Forbidden'),
    ('404', '404 Not Found'),
    ('405', '405 Method Not Allowed'),
    ('413', '413 Request Entity too large'),
    ('414', '414 Request-URI too long'),
    ('416', '416 Requested range not satisfiable'),
    ('500', '500 Internal Server Error'),
    ('501', '501 Not Implemented'),
    ('502', '502 Bad gateway'),
    ('503', '503 Service Unavailable'),
    ('504', '504 Gatewat Timeout'),
    ('505', '505 HTTP Version Not Supported')
]

RULES = [
    ('directory',  'Directory'),
    ('extensions', 'Extensions'),
    ('request',    'Regular Expression'),
    ('header',     'Header')
]