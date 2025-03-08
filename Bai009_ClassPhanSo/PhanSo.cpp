#include "PhanSo.h"
#include <iostream>
#include <cstdlib>
using namespace std;

PhanSo::PhanSo() : tuso(0), mauso(1) {}

int PhanSo::UCLN(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return abs(a);
}

void PhanSo::Nhap() {
    cout << "Nhap tu so: ";
    cin >> tuso;
    cout << "Nhap mau so: ";
    cin >> mauso;
    while (mauso == 0) {
        cout << "Mau so khac khong, vui long nhap lai mau so!\n";
        cout << "Nhap mau so: ";
        cin >> mauso;
    }
}

void PhanSo::Xuat() {
    int tempTuso = tuso, tempMauso = mauso;
    if (tempMauso < 0) {
        tempTuso = -tempTuso;
        tempMauso = -tempMauso;
    }
    cout << tempTuso << "/" << tempMauso;
}

void PhanSo::RutGon() {
    int gcd = UCLN(tuso, mauso);
    tuso /= gcd;
    mauso /= gcd;
    if (mauso < 0) {
        tuso = -tuso;
        mauso = -mauso;
    }
}

double PhanSo::GiaTriThapPhan() {
    return (double)tuso / mauso;
}

PhanSo PhanSo::Tong(PhanSo ps) {
    PhanSo result;
    result.tuso = tuso * ps.mauso + ps.tuso * mauso;
    result.mauso = mauso * ps.mauso;
    result.RutGon();
    return result;
}

PhanSo PhanSo::Hieu(PhanSo ps) {
    PhanSo result;
    result.tuso = tuso * ps.mauso - ps.tuso * mauso;
    result.mauso = mauso * ps.mauso;
    result.RutGon();
    return result;
}

PhanSo PhanSo::Tich(PhanSo ps) {
    PhanSo result;
    result.tuso = tuso * ps.tuso;
    result.mauso = mauso * ps.mauso;
    result.RutGon();
    return result;
}

PhanSo PhanSo::Thuong(PhanSo ps) {
    PhanSo result;
    result.tuso = tuso * ps.mauso;
    result.mauso = mauso * ps.tuso;
    result.RutGon();
    return result;
}
