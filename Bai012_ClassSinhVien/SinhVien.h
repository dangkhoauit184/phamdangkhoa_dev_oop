 #pragma once
#include <string>

class SinhVien {
private:
    std::string MaSV;
    std::string HoTen;
    int Tuoi;
    float DiemToan;
    float DiemVan;
    float DiemAnh;
    float DiemTB;
public:
    void Nhap();
    void Xuat();
    void TinhDiemTB();
    float DiemTBMon();
};

