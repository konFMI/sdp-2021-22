collection_incl = [
    my_utils_inc
]

collection_src_files = files(
    'TCollection.hpp'
)

collection_lib = shared_library('collection',
                                collection_src_files)

collection_inc_dir = include_directories('.')
collection_incl += collection_inc_dir

collection_dep = declare_dependency(
    link_with: collection_lib,
    include_directories: collection_incl
)