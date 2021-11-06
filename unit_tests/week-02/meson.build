#agrmemory_test_suit
week_02_test_includes = [
    include_directories('.'),
    agrutils_includes,
]

week_02_test_deps = [
    agrcollection_dep,
    agrutils_dep
]

#executables
week_02_test_collection_basic_exec =  executable('week_02_test_collection_basic',
                                                 files('TestCollectionBasic.cpp'),
                                                 include_directories: week_02_test_includes,
                                                 dependencies: week_02_test_deps,
                                                 cpp_args: arguments
                                                )
#tests
test('TestCollectionBasic', week_02_test_collection_basic_exec)
