project('sdp-2021-22',
        'cpp',
        version: '0.0.1')

subdirs_to_visit = [
    'tools',
    'week-02',
    'week-03',
    'week-05'
]

arguments = [
    '-DDEBUG'
]

## Include enabled tests
if get_option('test_llist').enabled()
    subdirs_to_visit += 'unit_tests/week-05'
endif
if get_option('test_memory').enabled()
    subdirs_to_visit += 'unit_tests/core'
endif
if get_option('test_collection').enabled()
    subdirs_to_visit += 'unit_tests/week-02'
endif

foreach _dir : subdirs_to_visit
    subdir(_dir)
endforeach  