#pragma once
#include <iostream>
#include <string>

class ElectiveDiscipline {
    public:
        ElectiveDiscipline(
            unsigned int id = 0, int minCourceRequired = 0,
            int maxStudentCapacity = 0, std::string name = {})
            : id_(id), minCourceRequired_(minCourceRequired),
              maxStudentCapacity_(maxStudentCapacity), name_(name) {

        	std::cout << "ElectiveDiscipline()\n";
        }
        ~ElectiveDiscipline() {
        	std::cout << "~ElectiveDiscipline()\n";
        }
    private:
        unsigned int    id_;
        int             minCourceRequired_;
        int             maxStudentCapacity_;
        std::string     name_;
};
