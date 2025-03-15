#include "HocSinh.h"
#include <iostream>
using namespace std;

HocSinh::HocSinh() {}

HocSinh::~HocSinh() {}

void HocSinh::nhap() {
    DoiTuong::nhap();

    cout << "Nhap lop: ";
    getline(cin, lop);
    cout << "Nhap ten truong: ";
    getline(cin, truong);
}

void HocSinh::xuat() {
    DoiTuong::xuat();

    cout << "Lop: " << lop << endl;
    cout << "Truong: " << truong << endl;
}
