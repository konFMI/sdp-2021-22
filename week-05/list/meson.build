#agrlinked_list
linked_list_incl = [
    my_utils_inc
]

linked_list_src_files = files(
    'agrlinkedlist.cpp'
)

linked_list_lib = shared_library('agrlist',
                                 linked_list_src_files)

linked_list_inc_dir  = include_directories('.')
linked_list_incl    += linked_list_inc_dir

linked_list_dep = declare_dependency(
    link_with: linked_list_lib,
    include_directories: linked_list_incl
)

subdir('tests')