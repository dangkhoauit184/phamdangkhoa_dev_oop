#pragma once
#include "NhanVien.h"

class NhanVienSanXuat : public NhanVien {
private:
    int soSanPham;

public:
    NhanVienSanXuat();
    ~NhanVienSanXuat();
    NhanVienSanXuat(const string& _hoTen, const string& _ngaySinh, int _soSP);
    void tinhTienLuong();
};
