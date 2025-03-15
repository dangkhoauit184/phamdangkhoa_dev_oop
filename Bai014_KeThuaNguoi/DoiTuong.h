#pragma once
#include <string>
using namespace std;

class DoiTuong {
protected:
    string hoTen;
    int tuoi;

public:
    DoiTuong();
    ~DoiTuong();

    void nhap();
    void xuat();
};
