
#include <iostream>
#include "student.h"
#include "elective_discipline.h"
#include "tcollection.h"

int main(void) {

    Student student;
    ElectiveDiscipline discipline;
    TCollection<Student> data;
    Student temp;
    data.Add(student);
    data.Add(student);
    data.Add(student);
    data.Add(student);
    data.Add(student);

    data.Remove(1);
    data.Remove(3);
    data.Get(2, temp);
    return 0;   
}