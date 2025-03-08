#include <iostream>
#include "SoPhuc.h"
using namespace std;

int main() {
    SoPhuc sp1, sp2, kq;
    
    cout << "Nhap so phuc thu nhat:" << endl;
    sp1.Nhap();
    cout << "Nhap so phuc thu hai:" << endl;
    sp2.Nhap();
    
    cout << "Hai so phuc vua nhap la:" << endl;
    cout << "So phuc thu nhat: "; 
    sp1.Xuat();
    cout << "So phuc thu hai: "; 
    sp2.Xuat();
    
    kq = sp1.Cong(sp2);
    cout << "Ket qua cong hai so phuc la: "; 
    kq.Xuat();
    
    kq = sp1.Tru(sp2);
    cout << "Ket qua tru hai so phuc la: "; 
    kq.Xuat();
    
    kq = sp1.Nhan(sp2);
    cout << "Ket qua nhan hai so phuc la: "; 
    kq.Xuat();
    
    kq = sp1.Chia(sp2);
    cout << "Ket qua chia hai so phuc la: "; 
    kq.Xuat();
    
    return 0;
}
