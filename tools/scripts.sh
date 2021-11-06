#!/bin/bash

ROOT_DIR=/home/konfmi/Projects/fmi/sdp-2021-22
BIN_DIR=${ROOT_DIR}/bin
TOOLS_DIR=${ROOT_DIR}/tools
BUILD_DIR=${ROOT_DIR}/build

# Removes dir if exists.
_rm_dir() {
	if [ -d $1  ]
	then
		rm -Rf $1;
	fi
}

# Removes all dirs found with find.
_rm_all_dir() {
    for dir_path in $(find ${ROOT_DIR} -type d -name $1)
    do
        echo "Remove ${dir_path}";
        rm -Rf ${dir_path};
    done
}

# Removes build directories from root of project.
agr-clean() {
    _rm_all_dir build;
    _rm_all_dir builddir;
}

# Compiles the code.
agr-compile() {
    pushd ${BUILD_DIR} > /dev/null
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

    if [ ! -d ${BUILD_DIR} ]
    then
        agr-setup-build
        agr-compile
    fi

    pushd ${BUILD_DIR} > /dev/null
    meson test
    popd > /dev/null
}

agr-copy-bins() {
    SEARCH_BUILD_DIRS=$(find ${BUILD_DIR}/ -mindepth 1 -maxdepth 1 -type d \( ! -iname "*meson*" ! -iname "*ninja*" \))

    if [ ! -d ${BIN_DIR} ]
    then
        mkdir ${BIN_DIR}
    fi

    for dir in ${SEARCH_BUILD_DIRS}
    do
        temp=$(find ${dir} -type f -executable \( ! -iname "*.so" \))
        for bins in ${temp}
        do
            cp ${bins} ${BIN_DIR}
        done
    done
}

