#agrlinkedlist
agrlinked_list_includes = [
    include_directories('.'),
    agrutils_includes
]

agrlinked_list_src_files = files(
    'linkedlist.h'
)

agrlinked_list_depencencies = [
    agrutils_dep
]

agrlinked_list_lib = shared_library('agrllist',
                                   agrlinked_list_src_files,
                                   include_directories: agrlinked_list_includes,
                                   dependencies: agrlinked_list_depencencies
                                  )

agrlinkedlist_dep = declare_dependency(
    link_with: agrlinked_list_lib,
    include_directories: agrlinked_list_includes
)

#agrlist
agrlist_includes = [
    include_directories('.'),
    agrutils_includes
]

agrlist_src_files = files(
    'list.cpp'
)

agrlist_depencencies = [
    agrutils_dep
]

agrlist_lib = shared_library('agrlist',
                             agrlist_src_files,
                             include_directories: agrlist_includes,
                             dependencies: agrlist_depencencies
                            )

agrlist_dep = declare_dependency(
    link_with: agrlist_lib,
    include_directories: agrlist_includes
)
