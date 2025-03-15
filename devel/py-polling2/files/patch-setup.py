--- setup.py.orig	2025-03-14 18:25:07 UTC
+++ setup.py
@@ -25,11 +25,10 @@ setup(
     py_modules=['polling2'],
     tests_require=TEST_REQUIREMENTS,
     test_suite='tests',
-    setup_requires=['pytest-runner',],
     classifiers=[
         "Programming Language :: Python :: 2",
         "Programming Language :: Python :: 3",
         "License :: OSI Approved :: MIT License",
         "Operating System :: OS Independent",
     ],
-)
\ No newline at end of file
+)
