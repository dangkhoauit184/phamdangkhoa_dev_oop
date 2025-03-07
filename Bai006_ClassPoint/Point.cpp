#include "Point.h"
#include <iostream>
#include <cmath>
using namespace std;

// Hàm nhập tọa độ điểm
void Point::Input() {
    cout << "Enter x: ";
    cin >> this->x;
    cout << "Enter y: ";
    cin >> this->y;
}

// Hàm xuất tọa độ điểm
void Point::Output() {
    cout << "(" << this->x << ", " << this->y << ")";
}

// Hàm di chuyển điểm
void Point::Move(double dx, double dy) {
    this->x += dx;
    this->y += dy;
}

// Hàm tính khoảng cách giữa hai điểm
double Point::Distance(const Point& p) {
    return sqrt(pow(this->x - p.x, 2) + pow(this->y - p.y, 2));
}

