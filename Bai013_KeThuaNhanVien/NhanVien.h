#pragma once
#include <string>
using namespace std;

class NhanVien {
protected:
    string hoTen;
    string ngaySinh;
    double luong;

public:

    NhanVien();
    ~NhanVien();
    void tinhTienLuong(); 
    void hienThi();
};
