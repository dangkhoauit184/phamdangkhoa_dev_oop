#include <iostream>
#include <string>
#include "SinhVien.h"
#include "HocSinh.h"
#include "CongNhan.h"
#include "NgheSi.h"
#include "CaSi.h"

using namespace std;

int main() {
    cout << "Chon loai doi tuong:" << endl;
    cout << "1. Sinh vien" << endl;
    cout << "2. Hoc sinh" << endl;
    cout << "3. Cong nhan" << endl;
    cout << "4. Nghe si" << endl;
    cout << "5. Ca si" << endl;

    int loai;
    cin >> loai;
    cin.ignore(); 

    if (loai == 1) {
        SinhVien sv;
        sv.nhap();
        cout << "\n----- Thong tin Sinh Vien -----" << endl;
        sv.xuat();

    }
    else if (loai == 2) {
        HocSinh hs;
        hs.nhap();
        cout << "\n----- Thong tin Hoc Sinh -----" << endl;
        hs.xuat();

    }
    else if (loai == 3) {
        CongNhan cn;
        cn.nhap();
        cout << "\n----- Thong tin Cong Nhan -----" << endl;
        cn.xuat();

    }
    else if (loai == 4) {
        NgheSi ns;
        ns.nhap();
        cout << "\n----- Thong tin Nghe Si -----" << endl;
        ns.xuat();

    }
    else if (loai == 5) {
        CaSi cs;
        cs.nhap();
        cout << "\n----- Thong tin Ca Si -----" << endl;
        cs.xuat();

    }
    else {
        cout << "Loai doi tuong khong hop le!" << endl;
    }
    return 0;
}
