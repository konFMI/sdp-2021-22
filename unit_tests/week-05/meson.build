#linked_list_test_suit
linked_list_test_includes = [
    agrutils_includes,
    agrlinked_list_includes
]

linked_list_test_deps = [
    agrlinkedlist_dep,
    agrutils_dep
]

#executables
linked_linked_list_functions_add_remove_exec =  executable('linked_list_functions_add_remove',
                                                           files('TestLinkedListAddRemove.cpp'),
                                                           cpp_args: arguments,
                                                           dependencies: linked_list_test_deps
                                                          )

linked_linked_list_functions_find_exec =  executable('linked_list_functions_find',
                                                     files('TestLinkedListFind.cpp'),
                                                     cpp_args: arguments,
                                                     dependencies: linked_list_test_deps
                                                    )
linked_linked_list_memory_layout_analyze =  executable('linked_list_memory_layout_analyze',
                                                      files('LinkedListMemoryLayoutAnalyze.cpp'),
                                                      cpp_args: arguments,
                                                      dependencies: linked_list_test_deps,
                                                      include_directories: linked_list_test_includes
                                                     )
#tests
test('LinkedListAddRemove', linked_linked_list_functions_add_remove_exec)
test('LinkedListFind', linked_linked_list_functions_find_exec)
test('LinkedListMemoryLayoutAnalyze', linked_linked_list_memory_layout_analyze)