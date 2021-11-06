agrsusi_includes = [
    include_directories('.'),
    agrelective_discipline_includes,
    agrstudent_includes
]

agrsusi_src_files = files('susi.cpp')

agrsusi_depenedencies = [
    agrelective_discipline_dep,
    agrstudent_dep
]

agrsusi_lib = shared_library('agrsusi',
                             agrsusi_src_files,
                             dependencies: agrsusi_depenedencies,
                             include_directories: agrsusi_includes
                            )

agrsusi_dep = declare_dependency(
    link_with: agrsusi_lib,
    include_directories: agrsusi_includes,
    dependencies: agrsusi_depenedencies
)