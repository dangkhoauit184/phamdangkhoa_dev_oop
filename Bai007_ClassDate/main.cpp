#include <iostream>
#include "Class.h"
using namespace std;

int main() {
    Date today;
    today.Input();

    if (today.getMonth() < 1 || today.getMonth() > 12 || today.getDay() < 1 || today.getDay() > today.daysInMonth()) {
        cout << "Invalid date" << endl;
        return 1;
    }

    cout << "Date entered: ";
    today.Output();

    Date nextDay = today.getNextDay();
    cout << "Next day is: ";
    nextDay.Output();

    return 0;
}

