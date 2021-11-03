elective_discipline_src_files = files(
    'elective_discipline.cpp'
)

elective_discipline_lib = shared_library('elective_discipline',
                                         elective_discipline_src_files)

elective_discipline_inc_dir = include_directories('.')

elective_discipline_dep = declare_dependency(
    link_with: elective_discipline_lib,
    include_directories: elective_discipline_inc_dir
)