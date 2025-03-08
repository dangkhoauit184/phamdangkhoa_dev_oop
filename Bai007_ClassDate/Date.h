#pragma once
class Date {
private:
    int day;
    int month;
    int year;
public:
    void Input();
    void Output();
    bool isLeapYear();
    int daysInMonth() const;
    Date getNextDay();

    // Getter
    int getDay() const;
    int getMonth() const;
    int getYear() const;
};

