#pragma once
#include <iostream>
#include <string>

typedef struct {
    std::string first;
    std::string second;
    std::string third;
} fullname_t;

class Student {
    public:
        Student(int facultyNumber = 0, int studyYear = 0, fullname_t name = {});
        ~Student();
    private:
        int         facultyNumber_;
        int         studyYear_;
        fullname_t  name_;
};