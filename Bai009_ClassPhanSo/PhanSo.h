 #pragma once
class PhanSo {
private:
    int tuso;
    int mauso;
    // Ham tinh uoc chung lon nhat cua 2 so nguyen
    int UCLN(int a, int b);
public:
    // Ham khoi tao mac dinh
    PhanSo();

    // Cac ham thanh vien
    void Nhap();
    void Xuat();
    void RutGon();
    double GiaTriThapPhan();

    // Cac phep toan voi phan so
    PhanSo Tong(PhanSo ps);
    PhanSo Hieu(PhanSo ps);
    PhanSo Tich(PhanSo ps);
    PhanSo Thuong(PhanSo ps);
};
