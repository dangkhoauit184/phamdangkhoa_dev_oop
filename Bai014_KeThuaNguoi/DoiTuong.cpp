#include "DoiTuong.h"
#include <iostream>
using namespace std;

DoiTuong::DoiTuong() {}

DoiTuong::~DoiTuong() {}

void DoiTuong::nhap() {
    cout << "Nhap ho ten: ";
    getline(cin, hoTen);

    cout << "Nhap tuoi: ";
    cin >> tuoi;
    cin.ignore(); 
}

void DoiTuong::xuat() {
    cout << "Ho Ten: " << hoTen << endl;
    cout << "Tuoi: " << tuoi << endl;
}
