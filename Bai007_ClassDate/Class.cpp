#include "Class.h"
#include <iostream>
using namespace std;

void Date::Input() {
    cout << "Enter the date (dd mm yyyy): ";
    cin >> day >> month >> year;
}

void Date::Output() {
    cout << day << "/" << month << "/" << year << endl;
}

bool Date::isLeapYear() {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int Date::daysInMonth() const {
    switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? 29 : 28;
    default:
        return 0;
    }
}

Date Date::getNextDay() {
    Date nextDate = *this;
    nextDate.day++;

    if (nextDate.day > nextDate.daysInMonth()) {
        nextDate.day = 1;
        nextDate.month++;

        if (nextDate.month > 12) {
            nextDate.month = 1;
            nextDate.year++;
        }
    }
    return nextDate;
}

int Date::getDay() const {
    return day;
}

int Date::getMonth() const {
    return month;
}

int Date::getYear() const {
    return year;
}
