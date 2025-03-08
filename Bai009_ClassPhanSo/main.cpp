#include <iostream>
#include "Point.h"
using namespace std;

int main() {
    PhanSo ps1, ps2, ketqua;
    int choice;

    cout << "Nhap phan so thu nhat:\n";
    ps1.Nhap();

    cout << "Nhap phan so thu hai:\n";
    ps2.Nhap();

    ps1.RutGon();
    cout << "Phan so thu nhat sau khi rut gon: ";
    ps1.Xuat();
    cout << "\n";

    ps2.RutGon();
    cout << "Phan so thu hai sau khi rut gon: ";
    ps2.Xuat();
    cout << "\n";

    cout << "Chon phep toan de tinh:\n";
    cout << "1. Cong\n";
    cout << "2. Tru\n";
    cout << "3. Nhan\n";
    cout << "4. Chia\n";
    cout << "Lua chon: ";
    cin >> choice;

    switch (choice) {
    case 1:
        ketqua = ps1.Tong(ps2);
        cout << "Tong hai phan so la: ";
        break;
    case 2:
        ketqua = ps1.Hieu(ps2);
        cout << "Hieu hai phan so la: ";
        break;
    case 3:
        ketqua = ps1.Tich(ps2);
        cout << "Tich hai phan so la: ";
        break;
    case 4:
        ketqua = ps1.Thuong(ps2);
        cout << "Thuong hai phan so la: ";
        break;
    default:
        cout << "Lua chon khong hop le!";
        return 0;
    }

    ketqua.Xuat();
    cout << "\nGia tri thap phan cua phep toan la: " << ketqua.GiaTriThapPhan();

    return 0;
}
