#pragma once
#include "DoiTuong.h"

class NgheSi : public DoiTuong {
private:
    string linhVuc; // ví dụ: hội họa, điêu khắc, nhạc cụ...

public:
    NgheSi();
    ~NgheSi();

    void nhap();
    void xuat();
};
