#include<iostream>
using namespace std;

struct PhanSo{
    int tuso;
    int mauso;
};

void Nhap(PhanSo &x){
    cout << "Nhập tử số: ";
    cin >> x.tuso;
    cout << "Nhập mẫu số: ";
    cin >> x.mauso;
    while(x.mauso == 0){
        cout << "Mẫu số khác không vui lòng nhập lại mẫu số;!\n";
        cout << "Nhập mẫu số: ";
        cin >> x.mauso;
    }
}

void Xuat(PhanSo x){
    if(x.mauso < 0){
        x.tuso = -x.tuso;
        x.mauso = -x.mauso;
    }
    cout << x.tuso << "/" << x.mauso;
}

int UCLN(int a, int b){
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return abs(a);
}

void RutGon(PhanSo &ps){
    int gcd = UCLN(ps.tuso, ps.mauso);
    ps.tuso /= gcd;
    ps.mauso /= gcd;
    if(ps.mauso < 0){
        ps.tuso = -ps.tuso;
        ps.mauso = -ps.mauso;
    }
}

double GiaTriThapPhan(PhanSo ps){
    return (double) ps.tuso / ps.mauso;
}

PhanSo TongPhanSo(PhanSo ps1, PhanSo ps2){
    PhanSo result;
    result.tuso = ps1.tuso * ps2.mauso + ps2.tuso * ps1.mauso;
    result.mauso = ps1.mauso * ps2.mauso;
    RutGon(result);
    return result;
}

PhanSo HieuPhanSo(PhanSo ps1, PhanSo ps2){
    PhanSo result;
    result.tuso = ps1.tuso * ps2.mauso - ps2.tuso * ps1.mauso;
    result.mauso = ps1.mauso * ps2.mauso;
    RutGon(result);
    return result;
}

PhanSo TichPhanSo(PhanSo ps1, PhanSo ps2){
    PhanSo result;
    result.tuso = ps1.tuso * ps2.tuso;
    result.mauso = ps1.mauso * ps2.mauso;
    RutGon(result);
    return result;
}

PhanSo ThuongPhanSo(PhanSo ps1, PhanSo ps2){
    PhanSo result;
    result.tuso = ps1.tuso * ps2.mauso;
    result.mauso = ps1.mauso * ps2.tuso;
    RutGon(result);
    return result;
}

int main(){
    PhanSo ps1, ps2, result;
    int choice;
    
    cout << "Nhập phân số thứ nhất:\n";
    Nhap(ps1);
    
    cout << "Nhập phân số thứ hai:\n";
    Nhap(ps2);

    RutGon(ps1);
    cout << "Phân số thứ nhất sau khi rút gọn: ";
    Xuat(ps1);
    cout << "\n"; 

    RutGon(ps2);
    cout << "Phân số thứ hai sau khi rút gọn: ";
    Xuat(ps2);
    cout << "\n";
    
    cout << "Chọn phép toán để tính: \n";
    cout << "1. Cộng\n";
    cout << "2. Trừ\n";
    cout << "3. Nhân\n";
    cout << "4. Chia\n";
    cout << "Lựa chọn: ";
    cin >> choice;
    
    switch(choice){
        case 1:
            result = TongPhanSo(ps1, ps2);
            cout << "Tổng hai phân số là: ";
            break;
        case 2:
            result = HieuPhanSo(ps1, ps2);
            cout << "Hiệu hai phân số là: ";
            break;
        case 3:
            result = TichPhanSo(ps1, ps2);
            cout << "Tích hai phân số là: ";
            break;
        case 4:
            result = ThuongPhanSo(ps1, ps2);
            cout << "Thương hai phân số là: ";
            break;
        default:
            cout << "Lựa chọn không hợp lệ!";
            return 0;
    }
    Xuat(result);
    cout << "\nGía trị thập phân của phép toán là: " << GiaTriThapPhan(result);
    return 0;
}
