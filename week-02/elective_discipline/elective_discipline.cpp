#include "elective_discipline.h"
#ifdef DEBUG
#define LOG_INFO(msg)(std::cout << (msg) << std::endl)
#else
#define LOG_INFO(msg)
#endif

ElectiveDiscipline::ElectiveDiscipline()
    : id_(0),
      minYear_(0),
      maxEnrolled_(0),
      name_({})
{

	LOG_INFO("ElectiveDiscipline()");
}

ElectiveDiscipline::~ElectiveDiscipline()
{
	LOG_INFO("~ElectiveDiscipline()");
}