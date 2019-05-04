//Ramin Dehghan
//TimeFormatMistake.cpp
//HW16

#include "TimeFormatMistake.hpp"

TimeFormatMistake::TimeFormatMistake() :
hour(0), minute(0) {}

TimeFormatMistake::TimeFormatMistake(int const& hour, int const& minute) :
hour(hour), minute(minute) {}

int TimeFormatMistake::getHour() const
{
    return hour;
}
int TimeFormatMistake::getMinute() const{
    return minute;
}
