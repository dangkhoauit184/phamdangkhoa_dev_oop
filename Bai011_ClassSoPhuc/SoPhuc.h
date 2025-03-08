 #pragma once
class SoPhuc {
private:
    int thuc, ao;
public:
    SoPhuc();
    SoPhuc(int thuc, int ao);
    void Nhap();
    void Xuat();
    SoPhuc Cong(SoPhuc &sp2);
    SoPhuc Tru(SoPhuc &sp2);
    SoPhuc Nhan(SoPhuc &sp2);
    SoPhuc Chia(SoPhuc &sp2);
};

