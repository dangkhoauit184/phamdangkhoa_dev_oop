#pragma once
#include "NhanVien.h"

class NhanVienVanPhong : public NhanVien {
private:
    int soNgayLamViec;

public:
    NhanVienVanPhong();
    ~NhanVienVanPhong();
    NhanVienVanPhong(string& _hoTen, string& _ngaySinh, int _soNgay);
    void tinhTienLuong();
};
