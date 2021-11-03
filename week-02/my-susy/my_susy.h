#pragma once
#include <iostream>
#include "elective_discipline.h"
#include "student.h"

class MySusy {
    public:
        MySusy();
        ~MySusy();
    private:
        ElectiveDiscipline discipline;
        Student student;
};