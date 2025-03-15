#include "SinhVien.h"
#include <iostream>
using namespace std;

SinhVien::SinhVien() {}

SinhVien::~SinhVien() {}

void SinhVien::nhap() {
    cout << "Nhap ho ten: ";
    getline(cin, hoTen);  

    cout << "Nhap MSSV: ";
    getline(cin, mssv);

    cout << "Nhap GPA: ";
    cin >> gpa;
    cin.ignore(); 
}
    
void SinhVien::xuat() {
    cout << "Ho Ten: " << hoTen << endl;
    cout << "MSSV: " << mssv << endl;
    cout << "GPA: " << gpa << endl;
}
