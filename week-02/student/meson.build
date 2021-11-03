student_incl = [
    my_utils_inc
]

student_src_files = files(
    'student.cpp'
)

student_lib = shared_library('student',
                             student_src_files)

student_inc_dir = include_directories('.')
student_incl += student_inc_dir

student_dep = declare_dependency(
    link_with: student_lib,
    include_directories: student_incl,
)