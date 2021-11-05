#pragma once
#include <iostream>
#include <set>
#include "elective_discipline.h"
#include "student.h"

typedef struct _student_entry_t
{
    Student student;
    std::set<ElectiveDiscipline> disciplines;
} student_entry_t;


class MySusy {
    public:
        MySusy();
        ~MySusy();
    private:
        std::set<student_entry_t> m_entries;
};