agrstudent_includes = include_directories('.')

agrstudent_src_files = files(
    'student.cpp'
)

agrstudent_lib = shared_library('agrstudent',
                                agrstudent_src_files)

agrstudent_dep = declare_dependency(
    link_with: agrstudent_lib,
    include_directories: agrstudent_includes
)