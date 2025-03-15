#include "NhanVienVanPhong.h"
#include <iostream>
using namespace std;

NhanVienVanPhong::NhanVienVanPhong() {}

NhanVienVanPhong::NhanVienVanPhong(string& _hoTen,string& _ngaySinh, int _soNgay) {}

NhanVienVanPhong::~NhanVienVanPhong() {}

void NhanVienVanPhong::tinhTienLuong() {
    luong = soNgayLamViec * 100000;
}
