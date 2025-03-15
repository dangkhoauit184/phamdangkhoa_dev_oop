#include "NhanVien.h"
#include <iostream>
using namespace std;

NhanVien::NhanVien() {}

NhanVien::~NhanVien() {
    
}

void NhanVien::tinhTienLuong() {}

void NhanVien::hienThi() {
    cout << "Ho Ten: " << hoTen << endl;
    cout << "Ngay Sinh: " << ngaySinh << endl;
    cout << "Luong: " << luong << endl;
}
