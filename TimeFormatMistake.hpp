//Ramin Dehghan
//TimeFormatMistake.hpp
//HW16

#ifndef _TIMEFORMATMISTAKE_HPP_
#define _TIMEFORMATMISTAKE_HPP_

class TimeFormatMistake
{
public:
    TimeFormatMistake();
    TimeFormatMistake(int const&, int const&);
    int getHour() const;
    int getMinute() const;
private:
    int hour;
    int minute;
};

#endif
