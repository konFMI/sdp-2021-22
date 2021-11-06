#pragma once
#include <iostream>
#include <set>
#include "elective_discipline.h"
#include "student.h"

typedef struct _student_list_entry_t
{
    Student student;
    std::set<ElectiveDiscipline> disciplines;
} student_list_entry_t;


class MySusy {
    public:
        MySusy();
        ~MySusy();
    private:
        std::set<student_list_entry_t> m_entries;
};