testing_inc = [
    my_utils_inc
]

testing_src_files = files(
	'test_collection_basic.cpp'
)

testing_deps = [
    collection_dep
]

testing_inc_dir = include_directories('.')
testing_inc += testing_inc_dir

tcb_exec =  executable('test_collection_basic',
                       testing_src_files,
                       include_directories: testing_inc,
                       dependencies: testing_deps,
                      )

test('test_collection_basic', tcb_exec)