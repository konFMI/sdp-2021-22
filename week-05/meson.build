week_05_subdirs = [
    'list/'
]

foreach _dir : week_05_subdirs
    subdir('list')
endforeach

week_05_includes = [
   # agrlist_includes
]

# week-05-solution                                                              #
# The executable that solves the given tasks in:                                #
# https://github.com/semerdzhiev/sdp-2021-22/tree/main/group-H/week-05#readme   #

executable('week-05-solution',
           files('solution.cpp'),
           dependencies: [agrlist_dep],
           include_directories: week_05_includes,
           cpp_args: arguments)
