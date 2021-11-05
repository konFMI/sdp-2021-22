#agrmemory
memory_incl = [
    my_utils_inc
]

memory_src_files = files(
    'agrmemory.cpp'
)

memory_lib = shared_library('agrmemory',
                            memory_src_files)

memory_inc_dir = include_directories('.')
memory_incl += memory_inc_dir

memory_dep = declare_dependency(
    link_with: memory_lib,
    include_directories: memory_incl
)

subdir('tests')