--- script/node_modules/os-homedir/index.js.orig	2019-12-27 05:38:53 UTC
+++ script/node_modules/os-homedir/index.js
@@ -14,7 +14,7 @@ function homedir() {
 		return home || (user ? '/Users/' + user : null);
 	}
 
-	if (process.platform === 'linux') {
+	if (process.platform === 'linux' || process.platform === 'freebsd') {
 		return home || (process.getuid() === 0 ? '/root' : (user ? '/home/' + user : null));
 	}
 
