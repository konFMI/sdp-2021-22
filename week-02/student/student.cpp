#include "student.h"

Student::Student(
    int facultyNumber, int studyYear, fullname_t name) 
    : facultyNumber_(facultyNumber),
      studyYear_(studyYear),
      name_(name)
{
	std::cout << "Student()\n";
}

Student::~Student()
{
	std::cout << "~Student()\n";
}