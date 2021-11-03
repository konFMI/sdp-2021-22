project('sdp-2021-22',
        'cpp',
        version: '0.0.1')

my_utils_inc = include_directories(
    'utils/'
)
#############################################
#   The order of visiting is important.     #
#   We want to build out *.so object first. #
#   So we can use them in main.cpp          #
#############################################

subdir('week-02/elective_discipline')
subdir('week-02/student')
subdir('week-02/my-susy')
subdir('week-02/collection')
subdir('week-02')
subdir('week-03')
subdir('ContestProblems/TimusOnlineJudge')

# Testing
subdir('testing')