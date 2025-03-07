#pragma once
class Point {
private:
    double x, y;
public:
    void Input();
    void Output();
    void Move(double dx, double dy);
    double Distance(const Point& p);
};
