#!/bin/bash

MESON_BUILD_DIR="build/"

if [ -d "${MESON_BUILD_DIR}" ]
then
    rm -Rf ${MESON_BUILD_DIR};
fi