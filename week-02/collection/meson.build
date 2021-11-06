agrcollection_includes = [
    include_directories('.')
]

agrcollection_src_files = files(
    'collection.h'
)

agrcollection_lib = shared_library('agrcollection',
                                   agrcollection_src_files)

agrcollection_dep = declare_dependency(
    link_with: agrcollection_lib,
    include_directories: agrcollection_includes
)