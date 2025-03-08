#include <iostream>
#include "Time.h"
using namespace std;

int main() {
    ThoiGian hientai, ketqua;
    int conggio, congphut, conggiay;
    
    cout << "Nhap thoi gian hien tai:" << endl;
    hientai.Nhap();
    
    cout << "Nhap thoi gian can cong them:" << endl;
    hientai.NhapGio(conggio);
    hientai.NhapPhut(congphut);
    hientai.NhapGiay(conggiay);
    
    ketqua = hientai.Cong(conggio, congphut, conggiay);
    
    cout << "Thoi gian sau khi cong them: ";
    ketqua.Xuat();
    
    return 0;
}
