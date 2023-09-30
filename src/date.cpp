#include<iostream>
#include<iomanip>
#include "date.h"
using namespace std;


date::date( int d , int m, int y)
{
    days = d;
    months = m;
    years = y;

}
void date::setDays(int d){
if (d>=1 && d<=31)
    {
        days = d;
    }

}
void date::setMonths(int m){
    if (m>=1 && m<=12)
    months = m;
}
void date::setYears(int y){
    years = y;
}
int date::getDays(){
    return days;
}
int date::getMonths(){
    return months;
}
int date::getYears(){
    return years;
}
void date::print()
{
    cout<<setw(2)<<setfill('0')<<days<<"/"<<setw(2)<<setfill('0')<<months<<"/"<<setw(4)<<setfill('0')<<years<<endl;
}
void date::addDays(int numDays)
{
    int totalDays = days + numDays;
    int daysInMonth;

    while (totalDays > 0)
    {
        // Get the number of days in the current month
        if (months == 2)
        {
            if ((years % 4 == 0 && years % 100 != 0) || years % 400 == 0)
            {
                daysInMonth = 29; // Leap year
            }
            else
            {
                daysInMonth = 28; // Non-leap year
            }
        }
        else if (months == 4 || months == 6 || months == 9 || months == 11)
        {
            daysInMonth = 30;
        }
        else
        {
            daysInMonth = 31;
        }

        // Check if we've exceeded the current month
        if (totalDays > daysInMonth)
        {
            totalDays -= daysInMonth;
            months++;

            if (months > 12)
            {
                months = 1;
                years++;
            }
        }
        else
        {
            days = totalDays;
            break;
        }
    }
}



date::~date()
{

}
