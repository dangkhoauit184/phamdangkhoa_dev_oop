#include <iostream>
using namespace std;

struct DaThuc {
    double a; // Hệ số x^2
    double b; // Hệ số x
    double c; // Hệ số hằng số
};

void NhapDaThuc(DaThuc &dt) {
    cout << "Nhập hệ số a của đa thức (x^2): ";
    cin >> dt.a;
    cout << "Nhập hệ số b của đa thức (x): ";
    cin >> dt.b;
    cout << "Nhập hệ số c của đa thức: ";
    cin >> dt.c;
}

void XuatDaThuc(DaThuc &dt) {
    cout << dt.a << "x^2 + " << dt.b << "x + " << dt.c << endl;
}

DaThuc TongDaThuc(DaThuc &dt1, DaThuc &dt2) {
    DaThuc result;
    result.a = dt1.a + dt2.a;
    result.b = dt1.b + dt2.b;
    result.c = dt1.c + dt2.c;
    return result;
}

DaThuc HieuDaThuc(DaThuc &dt1, DaThuc &dt2) {
    DaThuc result;
    result.a = dt1.a - dt2.a;
    result.b = dt1.b - dt2.b;
    result.c = dt1.c - dt2.c;
    return result;
}

void TichDaThuc(DaThuc &dt1, DaThuc &dt2, double &a, double &b, double &c, double &d, double &e) {
    // Tính các hệ số của đa thức bậc 4
    a = dt1.a * dt2.a; // Hệ số x^4
    b = dt1.a * dt2.b + dt1.b * dt2.a; // Hệ số x^3
    c = dt1.a * dt2.c + dt1.b * dt2.b + dt1.c * dt2.a; // Hệ số x^2
    d = dt1.b * dt2.c + dt1.c * dt2.b; // Hệ số x
    e = dt1.c * dt2.c; // Hệ số hằng số (giá trị tại x = 0)
}

double GiaTriTaiF0(double e) {
    return e; // Trả về giá trị của hệ số hằng số (giá trị tại x = 0)
}

int main() {
    DaThuc dt1, dt2;

    cout << "Nhập đa thức thứ nhất:" << endl;
    NhapDaThuc(dt1);
    cout << "Nhập đa thức thứ hai:" << endl;
    NhapDaThuc(dt2);

    cout << "Đa thức thứ nhất là: ";
    XuatDaThuc(dt1);
    cout << "Đa thức thứ hai là: ";
    XuatDaThuc(dt2);

    DaThuc tong = TongDaThuc(dt1, dt2);
    cout << "Tổng hai đa thức là: ";
    XuatDaThuc(tong);

    DaThuc hieu = HieuDaThuc(dt1, dt2);
    cout << "Hiệu hai đa thức là: ";
    XuatDaThuc(hieu);

    double a, b, c, d, e;
    TichDaThuc(dt1, dt2, a, b, c, d, e);
    cout << "Tích hai đa thức là: " << a << "x^4 + " << b << "x^3 + " << c << "x^2 + " << d << "x + " << e << endl;

    double giatri = GiaTriTaiF0(e);
    cout << "Giá trị của biểu thức tại x = 0 là: " << giatri << endl;

    return 0;
}
