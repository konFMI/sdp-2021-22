### Data Structures and Algorithms 2021/22

 Here will be the code from homeworks and projects for
 the course "Data Structures and Algorithms 2021/22"
 The build system is meson + ninja.

 The file structures is rather simple.
 Tests are in unit_test.
 Custom tools are int tools.
 

### Tools
 First you must source the file tools/scripts.sh. After that
 you will have the following functions to run from the console.
 
 These are the scripts to be run in order to compile,rebuild,
 and test the code. There is a clean script that removes all
 generated folders.

agr-clean       - Removes the generated directories and files.
agr-compile     - Compiles the code.
agr-setup-build - Performs a clean and recretes the build.
agr-test-all    - Runs custom unit tests.  If buld dir doesn't exist it creates it.

### Tips and tricks
