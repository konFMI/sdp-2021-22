#agrmemory
agrmemory_includes = [
    include_directories('.'),
    agrutils_includes
]

agrmemory_src_files = files(
    'agrmemory.cpp'
)

agrmemory_lib = shared_library('agrmemory',
                               agrmemory_src_files)

agrmemory_dep = declare_dependency(
    link_with: agrmemory_lib,
    include_directories: agrmemory_includes
)
