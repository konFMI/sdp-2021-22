#!/bin/bash

ROOT_DIR=/home/konfmi/Projects/fmi/sdp-2021-22/
TOOLS_DIR=${ROOT_DIR}/tools/

# Removes dir if exists.
_clear_dir() {
	if [ -d $1  ]
	then
		rm -Rf $1;
	fi
}

# Removes build directories from root of project.
agr-clean() {
    _clear_dir ${ROOT_DIR}/build
    _clear_dir ${ROOT_DIR}/builddir
}

# Compiles the code.
agr-compile() {
    pushd ${ROOT_DIR}/build > /dev/null
    ninja
    popd > /dev/null;
}

# Removes the build and creates it.
agr-setup-build() {
    pushd ${ROOT_DIR} > /dev/null
    agr-clean
    meson setup build
    popd > /dev/null
}

# Runs all the available tests.
agr-test-all(){
    pushd build/ > /dev/null
    meson test
    popd > /dev/null
}