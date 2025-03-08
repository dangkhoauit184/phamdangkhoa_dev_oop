#include <iostream>
#include "SinhVien.h"
using namespace std;

int main() {
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;

    // Cap phat mang dong cho danh sach sinh vien
    SinhVien* dssv = new SinhVien[n];
    
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin sinh vien thu " << i + 1 << ":" << endl;
        dssv[i].Nhap();
    }

    cout << endl;
    cout << "Danh sach sinh vien:" << endl;
    for (int i = 0; i < n; i++) {
        dssv[i].Xuat();
    }
    
    // Tim sinh vien co diem trung binh cao nhat
    SinhVien MaxSV = dssv[0];
    for (int i = 1; i < n; i++) {
        if (dssv[i].DiemTBMon() > MaxSV.DiemTBMon()) {
            MaxSV = dssv[i];
        }
    }
    
    cout << endl;
    cout << "Sinh vien co diem trung binh cao nhat:" << endl;
    MaxSV.Xuat();
    
    // Giai phong bo nho
    delete[] dssv;
    
    cout << "Nguyen Minh Nhut trum oop";
    return 0;
}
