#memory_test_suit
memory_inc = [
    my_utils_inc,
    memory_incl
]

memory_deps = [
    memory_dep
]

memory_inc_dir = include_directories('.')
memory_inc += memory_inc_dir
arguments = [
    '-DDEBUG'
]

#executables
calloc_verify_zeroed_exec =  executable('calloc_verify_zeroed',
                                        files('TestMemoryUnitCallocVerifyThatIsZeroed.cpp'),
                                        include_directories: memory_inc,
                                        dependencies: memory_deps,
                                        cpp_args: arguments
                                       )
calloc_modify_compare_exec =  executable('calloc_modify_compare',
                                         files('TestMemoryUnitCallocModifyCompare.cpp'),
                                         include_directories: memory_inc,
                                         dependencies: memory_deps,
                                         cpp_args: arguments
                                        )
#tests
test('TestMemoryUnitCallocVerifyThatIsZeroed', calloc_verify_zeroed_exec)
test('TestMemoryUnitCallocModifyCompare', calloc_modify_compare_exec)
