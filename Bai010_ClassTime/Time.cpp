#include "ThoiGian.h"
#include <iostream>
#include <iomanip>
using namespace std;

ThoiGian::ThoiGian() : gio(0), phut(0), giay(0) {}

ThoiGian::ThoiGian(int gio, int phut, int giay) {
    this->gio = gio;
    this->phut = phut;
    this->giay = giay;
}

void ThoiGian::Nhap() {
    cout << "Nhap gio: ";
    cin >> this->gio;
    cout << "Nhap phut: ";
    cin >> this->phut;
    cout << "Nhap giay: ";
    cin >> this->giay;
}

void ThoiGian::NhapGio(int &conggio) {
    cout << "Nhap so gio can cong them: ";
    cin >> conggio;
}

void ThoiGian::NhapPhut(int &congphut) {
    cout << "Nhap so phut can cong them: ";
    cin >> congphut;
}

void ThoiGian::NhapGiay(int &conggiay) {
    cout << "Nhap so giay can cong them: ";
    cin >> conggiay;
}

void ThoiGian::Xuat() {
    cout << setw(2) << setfill('0') << this->gio << ":"
         << setw(2) << setfill('0') << this->phut << ":"
         << setw(2) << setfill('0') << this->giay << endl;
}

void ThoiGian::ChuanHoa() {
    if (this->giay >= 60) {
        this->phut += this->giay / 60;
        this->giay %= 60;
    }
    if (this->giay < 0) {
        this->phut -= 1;
        this->giay += 60;
    }
    if (this->phut >= 60) {
        this->gio += this->phut / 60;
        this->phut %= 60;
    }
    if (this->phut < 0) {
        this->gio -= 1;
        this->phut += 60;
    }
    if (this->gio >= 24) {
        this->gio %= 24;
    }
    if (this->gio < 0) {
        this->gio += 24;
    }
}

ThoiGian ThoiGian::Cong(int conggio, int congphut, int conggiay) {
    ThoiGian tg(this->gio + conggio, this->phut + congphut, this->giay + conggiay);
    tg.ChuanHoa();
    return tg;
}
