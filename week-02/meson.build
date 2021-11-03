uni_system_src_files = files(
	'main.cpp'
)

uni_system_deps = [
    my_susy_dep
]

uni_system_inc_dir = include_directories('.')

executable('uni-demo',
           uni_system_src_files,
           include_directories: uni_system_inc_dir,
           dependencies: uni_system_deps
          )
