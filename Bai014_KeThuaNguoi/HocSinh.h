#pragma once
#include "DoiTuong.h"

class HocSinh : public DoiTuong {
private:
    string lop;
    string truong;

public:
    HocSinh();
    ~HocSinh();

    void nhap();
    void xuat();
};

