#include <iostream>
#include "Point.h"
using namespace std;

int main() {
    DaThuc dt1, dt2;

    cout << "Nhap da thuc thu nhat:" << endl;
    dt1.Nhap();
    cout << "Nhap da thuc thu 2:" << endl;
    dt2.Nhap();

    cout << "Da thuc thu nhat la: ";
    dt1.Xuat();
    cout << endl;
    cout << "Da thuc thu hai la: ";
    dt2.Xuat();
    cout << endl;

    DaThuc tong = dt1.Tong(dt2);
    cout << "Tong hai da thuc la: ";
    tong.Xuat();
    cout << endl;

    DaThuc hieu = dt1.Hieu(dt2);
    cout << "Hieu hai da thuc la: ";
    hieu.Xuat();
    cout << endl;

    double heSo4, heSo3, heSo2, heSo1, heSo0;
    dt1.Tich(dt2, heSo4, heSo3, heSo2, heSo1, heSo0);
    cout << "Tich hai da thuc la: " << heSo4 << "x^4 + " << heSo3 << "x^3 + "
        << heSo2 << "x^2 + " << heSo1 << "x + " << heSo0 << endl;

    cout << "Gia tri cua da thuc tại x = 0 la: " << heSo0 << endl;

    return 0;
}
