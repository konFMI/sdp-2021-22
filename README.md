### Data Structures and Algorithms 2021/22

 Here will be the code from homeworks and projects for
 the course "Data Structures and Algorithms 2021/22"
 The build system is meson + ninja.

### Tools
 First you must source the file tools/scripts.sh. After that
 you will have the following functions to run from the console.
 
 These are the scripts to be run in order to compile,rebuild,
 and test the code. There is a clean script that removes all
 generated folders.

agr-clean       - Removes the generated directories and files.
agr-compile     - Compiles the code.
agr-setup-build - Performs a clean and recretes the build.
agr-test-all    - Runs custom unit tests.

### Tips and tricks
There is a todo: to add a meson_options.txt file that will
spesify what folder to build/compile or what test to be run and so on. 