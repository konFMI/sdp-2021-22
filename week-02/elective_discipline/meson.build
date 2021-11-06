agrelective_discipline_includes = include_directories('.')

agrelective_discipline_src_files = files(
    'elective_discipline.cpp'
)

agrelective_discipline_lib = shared_library('agrelective_discipline',
                                            agrelective_discipline_src_files)

agrelective_discipline_dep = declare_dependency(
    link_with: agrelective_discipline_lib,
    include_directories: agrelective_discipline_includes
)