#ifndef MY_LOG_H
#define MY_LOG_H

#include <iostream>

#ifdef DEBUG
#define SEPERATOR "\t:\t"
#define LOG_LEVEL(level, msg)(std::cout << __FILE__ << SEPERATOR << __LINE__ << SEPERATOR << __PRETTY_FUNCTION__ << SEPERATOR << (level) << SEPERATOR << (msg) << std::endl)
#define LOG_INFO(msg)(LOG_LEVEL("INFO", (msg)))
#define LOG_ERROR(msg)(LOG_LEVEL("ERROR", (msg)))
#else
#define LOG_INFO(msg)
#define LOG_ERROR(msg)
#endif

#endif //MY_LOG_H