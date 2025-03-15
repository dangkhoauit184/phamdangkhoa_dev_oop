#pragma once
#include "NhanVien.h"

class NhanVienSanXuat : public NhanVien {
private:
    int soSanPham;

public:
    NhanVienSanXuat();
    ~NhanVienSanXuat();
    NhanVienSanXuat(string& _hoTen, string& _ngaySinh, int _soSP);
    void tinhTienLuong();
};
