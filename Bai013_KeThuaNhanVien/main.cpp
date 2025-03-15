#include <iostream>
#include <string>
#include "NhanVienSanXuat.h"
#include "NhanVienVanPhong.h"

using namespace std;

int main() {
    int n;
    cout << "Nhap so luong nhan vien: ";
    cin >> n;
    cin.ignore();

    NhanVien** danhSach = new NhanVien * [n];

    for (int i = 0; i < n; ++i) {
        cout << "\nNhap thong tin nhan vien thu " << i + 1 << ":\n";
        cout << "1. Nhan vien san xuat\n2. Nhan vien van phong\nChon: ";
        int loai;
        cin >> loai;
        cin.ignore();

        string hoTen, ngaySinh;
        cout << "Ho ten: ";
        getline(cin, hoTen);
        cout << "Ngay sinh: ";
        getline(cin, ngaySinh);

        if (loai == 1) {

            int soSP;
            cout << "So san pham: ";
            cin >> soSP;
            cin.ignore();

            NhanVienSanXuat* nvSX = new NhanVienSanXuat(hoTen, ngaySinh, soSP);
            
            nvSX->tinhTienLuong();
         
			cout << "\n---Thong tin nhan vien san xuat---\n";
            nvSX->hienThi();

            danhSach[i] = nvSX;

        }
        else {
			
            int soNgay;
            cout << "So ngay lam viec: ";
            cin >> soNgay;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            NhanVienVanPhong* nvVP = new NhanVienVanPhong(hoTen, ngaySinh, soNgay);
            nvVP->tinhTienLuong();
			cout << "\n---Thong tin nhan vien van phong---\n";
            nvVP->hienThi();

            danhSach[i] = nvVP;
        }
    }
    delete[] danhSach;

    return 0;
}
