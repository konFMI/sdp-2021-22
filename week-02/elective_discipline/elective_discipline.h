#pragma once
#include <iostream>
#include <string>

class ElectiveDiscipline {
    public:
        ElectiveDiscipline();

        ~ElectiveDiscipline();
    private:
        unsigned int    id_;
        int             minYear_;
        int             maxEnrolled_;
        std::string     name_;
};
