#pragma once
#include "DoiTuong.h"  
using namespace std;

class SinhVien : public DoiTuong {
private:
    string mssv;
    double gpa;

public:
    SinhVien();
    ~SinhVien();

    void nhap();
    void xuat();
};
