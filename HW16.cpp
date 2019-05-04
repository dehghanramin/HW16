//Ramin Dehghan
//HW16.cpp
//HW16
#include <iostream>
#include "TimeFormatMistake.hpp"
using namespace std;


void getData(int&, int&);
void convertAndDisplayTime(int, int);
void getStop(char&);

int main(void)
{
    char stop;
    do
    {
        int hour, minute;
        try
        {
            getData(hour, minute);
            if (!(hour >= 0 && hour <= 24) || !(minute >= 0 && minute <= 60))
            {
                throw TimeFormatMistake(hour, minute);
            }
            convertAndDisplayTime(hour, minute);
        }
        catch(TimeFormatMistake const& e)
        {
            std::cerr << e.getHour() << ":" << e.getMinute() << " Is not a valid time!" << endl;
        }
        getStop(stop);

    } while (stop == 'y' || stop == 'Y');
    cout << "Bye Bye!" << endl;
    return 0;
}


void getData(int& hour, int& minute)
{
    cout << "Enter time in 24-hour format:\n"
         << "Hour: ";
    cin >> hour;
    cout << "Minute: ";
    cin >> minute;
}

void convertAndDisplayTime(int hour, int minute)
{
    try
    {
        if (hour > 0 && hour < 12)
        {
            cout << "That is: " << hour << ":" << minute << " AM." << endl;
        } 
        else if (hour > 12 && hour < 24)
        {
            hour -= 12;
            cout << "That is: " << hour << ":" << minute << " PM." << endl;
        }
        else if (hour == 0)
        {
            hour += 12;
            cout << "That is: " << hour << ":" << minute << " AM." << endl;
        }
        else if (hour == 12)
        {
            cout << "That is: " << hour << ":" << minute << " PM." << endl;
        }
        else
        {
            throw TimeFormatMistake(hour, minute);
        }

    }
    catch(TimeFormatMistake const& e)
    {
        std::cerr << e.getHour() << ":" << e.getMinute() << " Is not a valid time!" << endl;
    }
}

void getStop(char& stop)
{
    cout << "Do you want to continue? (y/n): ";
    cin >> stop;
    cout << endl;
}