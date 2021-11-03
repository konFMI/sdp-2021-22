my_susy_src_files = files('my_susy.cpp')

my_susy_depenedencies = [
    elective_discipline_dep,
    student_dep
]

my_susy_link_with = [
    elective_discipline_lib,
    student_lib
]

my_sysu_includes = [
    elective_discipline_inc_dir,
    student_inc_dir
]

my_susy_lib = shared_library('my_susy',
                             my_susy_src_files,
                             dependencies: my_susy_depenedencies,
                             include_directories: my_sysu_includes,
                            )

my_susy_inc_dir = include_directories('.')

my_susy_dep = declare_dependency(
    link_with: my_susy_lib,
    include_directories: my_susy_inc_dir,
    dependencies: my_susy_depenedencies
)