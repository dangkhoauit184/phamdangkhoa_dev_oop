#include <iostream>
#include <iomanip>
using namespace std;

// Khai báo struct thời gian
struct ThoiGian {
    int gio, phut, giay;
};

// Hàm nhập thời gian
void NhapThoiGian(ThoiGian &t) {
    cout << "Nhập giờ: ";
    cin >> t.gio;
    cout << "Nhập phút: ";
    cin >> t.phut;
    cout << "Nhập giây: ";
    cin >> t.giay;
}

// Hàm xuất thời gian
void XuatThoiGian(ThoiGian &t) {
    cout << setw(2) << setfill('0') << t.gio << ":";
    cout << setw(2) << setfill('0') << t.phut << ":";
    cout << setw(2) << setfill('0') << t.giay << endl;
}

// Hàm chuẩn hóa thời gian
void ChuanHoaThoiGian(ThoiGian &t) {
    if (t.giay >= 60) {
        t.phut += t.giay / 60;
        t.giay %= 60;
    }
    if (t.giay < 0) {
        t.phut -= 1;
        t.giay += 60;
    }
    if (t.phut >= 60) {
        t.gio += t.phut / 60;
        t.phut %= 60;
    }
    if (t.phut < 0) {
        t.gio -= 1;
        t.phut += 60;
    }
    if (t.gio >= 24) {
        t.gio %= 24;
    }
    if (t.gio < 0) {
        t.gio += 24;
    }
}

// Hàm cộng thời gian
ThoiGian CongThoiGian(ThoiGian t, int conggio, int congphut, int conggiay) {
    t.gio += conggio;
    t.phut += congphut;
    t.giay += conggiay;
    ChuanHoaThoiGian(t);
    return t;
}

int main() {
    ThoiGian hientai, ketqua;
    int conggio, congphut, conggiay;

    // Nhập thời gian hiện tại
    cout << "Nhập thời gian hiện tại:" << endl;
    NhapThoiGian(hientai);

    // Nhập thời gian cần thêm
    cout << "Nhập thời gian cần thêm (giờ, phút, giây): ";
    cin >> conggio >> congphut >> conggiay;

    // Cộng thời gian
    ketqua = CongThoiGian(hientai, conggio, congphut, conggiay);

    // Xuất kết quả
    cout << "Thời gian sau khi cộng thêm: ";
    XuatThoiGian(ketqua);

    return 0;
}
