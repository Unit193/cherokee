# Fixes a bug that led easily to a failed migration
Index: cherokee-0.6.1/contrib/05to06.py
===================================================================
--- cherokee-0.6.1.orig/contrib/05to06.py	2008-04-14 10:15:42.000000000 -0500
+++ cherokee-0.6.1/contrib/05to06.py	2008-04-14 10:26:02.000000000 -0500
@@ -270,7 +270,12 @@
             more = self._process_entry_guts (prefix)
             if not more: break
 
-        print "%s!priority = %d" % (prefix, self._vserver_last_priority * 10)
+        try:
+            priority = self._vserver_last_priority * 10
+        except AttributeError:
+            self._vserver_last_priority = 1
+            priority = 10
+        print "%s!priority = %d" % (prefix, priority * 10)
         self._vserver_last_priority += 1
 
     def _process_encoder (self, prefix):
