#include "Point.h"
#include <iostream>
using namespace std;

DaThuc::DaThuc() : a(0), b(0), c(0) {}

void DaThuc::Nhap() {
    cout << "Nhap he so a cua da thuc (x^2): ";
    cin >> a;
    cout << "Nhap he so b cua da thuc (x): ";
    cin >> b;
    cout << "Nhap he so c cua da thuc ";
    cin >> c;
}

void DaThuc::Xuat() {
    cout << a << "x^2 + " << b << "x + " << c;
}

DaThuc DaThuc::Tong(DaThuc& other) {
    DaThuc kq;
    kq.a = this->a + other.a;
    kq.b = this->b + other.b;
    kq.c = this->c + other.c;
    return kq;
}

DaThuc DaThuc::Hieu(DaThuc& other) {
    DaThuc kq;
    kq.a = this->a - other.a;
    kq.b = this->b - other.b;
    kq.c = this->c - other.c;
    return kq;
}

void DaThuc::Tich(DaThuc& other, double& heSo4, double& heSo3, double& heSo2, double& heSo1, double& heSo0) {
    heSo4 = a * other.a;                        
    heSo3 = a * other.b + b * other.a;             
    heSo2 = a * other.c + b * other.b + c * other.a; 
    heSo1 = b * other.c + c * other.b;             
    heSo0 = c * other.c;                           
}

double DaThuc::GiaTriTaiF0() {
    return c;
}
