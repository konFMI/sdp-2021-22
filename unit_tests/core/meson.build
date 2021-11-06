#memory_test_suit
agrmemory_test_includes = include_directories('.')

agrmemory_test_deps = [
    agrmemory_dep
]

#executables
agrmemory_test_calloc_verify_zeroed_exec =  executable('agrmemory_test_calloc_verify_zeroed',
                                                       files('TestMemoryUnitCallocVerifyThatIsZeroed.cpp'),
                                                       include_directories: agrmemory_test_includes,
                                                       dependencies: agrmemory_test_deps,
                                                       cpp_args: arguments
                                                   )

agrmemory_test_calloc_modify_compare_exec =  executable('agrmemory_test_calloc_modify_compare',
                                                        files('TestMemoryUnitCallocModifyCompare.cpp'),
                                                        include_directories: agrmemory_test_includes,
                                                        dependencies: agrmemory_test_deps,
                                                        cpp_args: arguments
                                                       )
#tests
test('TestMemoryUnitCallocVerifyThatIsZeroed', agrmemory_test_calloc_verify_zeroed_exec)
test('TestMemoryUnitCallocModifyCompare', agrmemory_test_calloc_modify_compare_exec)
