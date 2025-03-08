#include "SinhVien.h"
#include <iostream>
#include <iomanip>
using namespace std;

void SinhVien::Nhap() {
    cout << "Nhap ma sinh vien: ";
    cin >> MaSV;
    cin.ignore(); // Xoa bo dem sau khi nhap ma sinh vien

    cout << "Nhap ho va ten sinh vien: ";
    getline(cin, HoTen);

    cout << "Nhap tuoi sinh vien: ";
    cin >> Tuoi;

    cout << "Nhap diem Toan: ";
    cin >> DiemToan;

    cout << "Nhap diem Van: ";
    cin >> DiemVan;

    cout << "Nhap diem Anh: ";
    cin >> DiemAnh;

    TinhDiemTB();
}

void SinhVien::TinhDiemTB() {
    // Diem trung binh tinh theo cong thuc: ((Toan*2)+(Van*2)+(Anh*1)) / 5
    DiemTB = ((DiemToan * 2) + (DiemVan * 2) + (DiemAnh * 1)) / 5;
}

void SinhVien::Xuat() {
    cout << "Ma sinh vien: " << MaSV << endl;
    cout << "Ho va ten: " << HoTen << endl;
    cout << "Tuoi: " << Tuoi << endl;
    cout << "Diem Toan: " << DiemToan << endl;
    cout << "Diem Van: " << DiemVan << endl;
    cout << "Diem Anh: " << DiemAnh << endl;
    cout << "Diem trung binh: " << fixed << setprecision(2) << DiemTB << endl;
}

float SinhVien::DiemTBMon() {
    return DiemTB;
}
