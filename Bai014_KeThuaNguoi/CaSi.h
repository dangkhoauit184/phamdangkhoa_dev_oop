#pragma once
#include "DoiTuong.h"

class CaSi : public DoiTuong {
private:
    string dongNhac; // ví dụ: pop, rock, trữ tình...

public:
    CaSi();
    ~CaSi();

    void nhap();
    void xuat();
};
#pragma once
