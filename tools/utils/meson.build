#agrutils
agrutils_includes = include_directories('.')

agrutils_src_files = files(
    'agrutils.cpp'
)

agrutils_lib = shared_library('agrutils',
                              agrutils_src_files,
                              include_directories: agrutils_includes
                             )

agrutils_dep = declare_dependency(
    link_with: agrutils_lib,
    include_directories: agrutils_includes
)
