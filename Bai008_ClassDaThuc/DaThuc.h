#pragma once
class DaThuc {
private:
    double a; 
    double b;
    double c; 
public:
   
    DaThuc();

    void Nhap();
    void Xuat();

    DaThuc Tong(DaThuc& other);
    DaThuc Hieu(DaThuc& other);

    void Tich(DaThuc& other, double& heSo4, double& heSo3, double& heSo2, double& heSo1, double& heSo0);

    double GiaTriTaiF0();
};

