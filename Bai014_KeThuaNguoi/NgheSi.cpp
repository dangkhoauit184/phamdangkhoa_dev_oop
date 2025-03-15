#include "NgheSi.h"
#include <iostream>
using namespace std;

NgheSi::NgheSi() {}

NgheSi::~NgheSi() {}

void NgheSi::nhap() {
    DoiTuong::nhap();

    cout << "Linh vuc hoat dong (vi du: ca hat, nhay mua, keu goi tu thien, phan dong...): ";
    getline(cin, linhVuc);
}

void NgheSi::xuat() {
    DoiTuong::xuat();
    cout << "Linh vuc nghe thuat: " << linhVuc << endl;
}
