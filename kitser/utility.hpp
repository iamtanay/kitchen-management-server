#ifndef UTILITY_HPP
#define UTILITY_HPP

#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <ctime>

inline std::string dateTime()
{
    time_t rawtime;
    struct tm * timeinfo;
    char buffer[80];

    time (&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(buffer,80,"%d-%m-%Y_%H-%M-%S",timeinfo);
    return std::string(buffer);
}
#endif
