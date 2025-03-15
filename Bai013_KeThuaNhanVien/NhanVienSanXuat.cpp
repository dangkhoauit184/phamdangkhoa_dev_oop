#include "NhanVienSanXuat.h"
#include <iostream>
using namespace std;

NhanVienSanXuat::NhanVienSanXuat() {}

NhanVienSanXuat::NhanVienSanXuat(string& _hoTen, string& _ngaySinh, int _soSP) {}

NhanVienSanXuat::~NhanVienSanXuat() {}

void NhanVienSanXuat::tinhTienLuong() {
    luong = 500000 + soSanPham * 5000;
}
