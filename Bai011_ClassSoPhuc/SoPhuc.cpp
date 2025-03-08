#include "SoPhuc.h"
#include <iostream>
using namespace std;

SoPhuc::SoPhuc() : thuc(0), ao(0) {}

SoPhuc::SoPhuc(int thuc, int ao) {
    this->thuc = thuc;
    this->ao = ao;
}

void SoPhuc::Nhap() {
    cout << "Nhap phan thuc: ";
    cin >> this->thuc;
    cout << "Nhap phan ao: ";
    cin >> this->ao;
}

void SoPhuc::Xuat() {
    if (this->ao < 0) {
        cout << this->thuc << " - " << -this->ao << "i" << endl;
    } else {
        cout << this->thuc << " + " << this->ao << "i" << endl;
    }
}

SoPhuc SoPhuc::Cong(SoPhuc &sp2) {
    return SoPhuc(this->thuc + sp2.thuc, this->ao + sp2.ao);
}

SoPhuc SoPhuc::Tru(SoPhuc &sp2) {
    return SoPhuc(this->thuc - sp2.thuc, this->ao - sp2.ao);
}

SoPhuc SoPhuc::Nhan(SoPhuc &sp2) {
    // (a + bi) * (c + di) = (ac - bd) + (ad + bc)i
    int newThuc = this->thuc * sp2.thuc - this->ao * sp2.ao;
    int newAo   = this->thuc * sp2.ao + this->ao * sp2.thuc;
    return SoPhuc(newThuc, newAo);
}

SoPhuc SoPhuc::Chia(SoPhuc &sp2) {
    // (a + bi) / (c + di) = [(ac+bd) / (c^2+d^2)] + [(bc - ad) / (c^2+d^2)]i
    int denominator = sp2.thuc * sp2.thuc + sp2.ao * sp2.ao;
    // Nếu mẫu số = 0 thì không thể chia (trường hợp này không được xử lý thêm)
    int newThuc = (this->thuc * sp2.thuc + this->ao * sp2.ao) / denominator;
    int newAo   = (this->ao * sp2.thuc - this->thuc * sp2.ao) / denominator;
    return SoPhuc(newThuc, newAo);
}
