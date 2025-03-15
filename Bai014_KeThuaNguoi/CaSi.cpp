#include "CaSi.h"
#include <iostream>
using namespace std;

CaSi::CaSi() {}

CaSi::~CaSi() {}

void CaSi::nhap() {
    DoiTuong::nhap();

    cout << "The loai nhac:(bolero, rap, tai tu ben tre...) ";
    getline(cin, dongNhac);
}

void CaSi::xuat() {
    DoiTuong::xuat();
    cout << "Dong nhac: " << dongNhac << endl;
}
