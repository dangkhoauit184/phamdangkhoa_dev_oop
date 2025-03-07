#include<iostream>
using namespace std;

// Khai báo struct số phức gồm phần thực và phần ảo
struct complexNumbers {
    int real;
    int imag;
};

// Hàm nhập hai số phức
void Nhập(complexNumbers &sp) {
    cout << "Nhập phần thực: ";
    cin >> sp.real;
    cout << "Nhập phần ảo: ";
    cin >> sp.imag;
}

// Hàm chuẩn hóa số phức
void Xuất(complexNumbers sp) {
    if (sp.imag < 0) {
        cout << sp.real << " - " << -sp.imag << "i" << endl;
    }
    else {
        cout << sp.real << " + " << sp.imag << "i" << endl;
    }
}

// Hàm xuất hai số phức 
void xuất(complexNumbers sp1, complexNumbers sp2) {
    cout << "Số phức thứ nhất là: ";
    Xuất(sp1);
    cout << "Số phức thứ hai là: ";
    Xuất(sp2);
}

// Hàm cộng hai số phức
complexNumbers Plus(complexNumbers sp1, complexNumbers sp2) {
    complexNumbers ketQua;
    ketQua.real = sp1.real + sp2.real;
    ketQua.imag = sp1.imag + sp2.imag;
    return ketQua;
}

// Hàm trừ hai số phức
complexNumbers Minus(complexNumbers sp1, complexNumbers sp2) {
    complexNumbers ketQua;
    ketQua.real = sp1.real - sp2.real;
    ketQua.imag = sp1.imag - sp2.imag;
    return ketQua;
}

// Hàm nhân hai số phức
complexNumbers Multiply(complexNumbers sp1, complexNumbers sp2) {
    complexNumbers ketQua;
    ketQua.real = sp1.real * sp2.real - sp1.imag * sp2.imag;  // (ac - bd)
    ketQua.imag = sp1.real * sp2.imag + sp1.imag * sp2.real;  // (ad + bc)
    return ketQua;
}

// Hàm chia hai số phức
complexNumbers Divide(complexNumbers sp1, complexNumbers sp2) {
    complexNumbers ketQua;
    int denominator = sp2.real * sp2.real + sp2.imag * sp2.imag;  // c^2 + d^2
    ketQua.real = (sp1.real * sp2.real + sp1.imag * sp2.imag) / denominator;  // (ac + bd) / (c^2 + d^2)
    ketQua.imag = (sp1.imag * sp2.real - sp1.real * sp2.imag) / denominator;  // (bc - ad) / (c^2 + d^2)
    return ketQua;
}

int main() {
    complexNumbers sp1, sp2, Kq;

    cout << "Nhập số phức thứ nhất:" << endl;
    Nhập(sp1);
    cout << "Nhập số phức thứ hai:" << endl;
    Nhập(sp2);

    cout << "Hai số phức vừa nhập là:" << endl;
    xuất(sp1, sp2);

    // Cộng hai số phức
    Kq = Plus(sp1, sp2);
    cout << "Kết quả cộng hai số phức là: ";
    Xuất(Kq);

    // Trừ hai số phức
    Kq = Minus(sp1, sp2);
    cout << "Kết quả trừ hai số phức là: ";
    Xuất(Kq);

    // Nhân hai số phức
    Kq = Multiply(sp1, sp2);
    cout << "Kết quả nhân hai số phức là: ";
    Xuất(Kq);

    // Chia hai số phức
    Kq = Divide(sp1, sp2);
    cout << "Kết quả chia hai số phức là: ";
    Xuất(Kq);

    return 0;
}
