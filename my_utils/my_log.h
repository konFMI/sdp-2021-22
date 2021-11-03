#ifndef MY_LOG_H
#define MY_LOG_H

#include <iostream>

#ifdef DEBUG
#define LOG_LEVEL(level, msg)(std::cout << __func__ << (level) << " : " << (msg) << std::endl)
#define LOG_INFO(msg)(LOG_LEVEL("INFO", (msg)))
#define LOG_ERROR(msg)(LOG_LEVEL("ERROR", (msg)))
#else
#define LOG_INFO(msg)
#define LOG_ERROR(msg)
#endif

#endif //MY_LOG_H