#include <iostream>
#include "Point.h"
using namespace std;

int main() {
    Point p1, p2;
    cout << "Enter initial point coordinates:" << endl;
    p1.Input();

    cout << "The point you just entered: ";
    p1.Output();
    cout << endl;

    double dx, dy;
    cout << "Enter displacement dx: ";
    cin >> dx;
    cout << "Enter displacement dy: ";
    cin >> dy;

    p2 = p1; // Copy the initial point
    p2.Move(dx, dy);

    cout << "Point after moving: ";
    p2.Output();
    cout << endl;

    cout << "The distance between the initial point and the moved point is: " << p1.Distance(p2) << endl;

    return 0;
}
