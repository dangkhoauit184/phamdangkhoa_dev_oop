#include <iostream>
#include <vector>
#include <string>
using namespace std;
class NhomMau
{
protected:
    bool Rh;

public:
    NhomMau();
    ~NhomMau();
    void Nhap();
    bool GetRh();
    virtual char GetTen() = 0;
    virtual bool KTraDiTruyen(char me, char con) = 0;
    virtual bool KTraTuongthich(char nm, bool c) = 0;
};
class NhomA : public NhomMau
{
public:
    NhomA();
    ~NhomA();
    char GetTen();
    bool KTraDiTruyen(char me, char con);
    bool KTraTuongthich(char nm, bool c);
};
class NhomB : public NhomMau
{
public:
    NhomB();
    ~NhomB();
    char GetTen();
    bool KTraDiTruyen(char me, char con);
    bool KTraTuongthich(char nm, bool c);
};
class NhomC : public NhomMau
{
public:
    NhomC();
    ~NhomC();
    char GetTen();
    bool KTraDiTruyen(char me, char con);
    bool KTraTuongthich(char nm, bool c);
};
class NhomO : public NhomMau
{
public:
    NhomO();
    ~NhomO();
    char GetTen();
    bool KTraDiTruyen(char me, char con);
    bool KTraTuongthich(char nm, bool c);
};
NhomMau::NhomMau()
{
    Rh = true;
}
NhomMau::~NhomMau()
{
}
void NhomMau::Nhap()
{
    char c;
    cout << "Nhap Rh: ";
    cin >> c;
    if (c == '+')
    {
        Rh = true;
    }
    else if (c == '-')
    {
        Rh = false;
    }
    else
    {
        cout << "Nhap sai Rh, nhap lai: ";
        cin >> c;
    }
}
void xuat(NhomMau *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhom mau: " << a[i].GetTen() << endl;
        cout << "Rh: " << a[i].GetRh() << endl;
    }
}
bool NhomMau::GetRh()
{
    return Rh;
}
NhomA::NhomA()
{
}
NhomA::~NhomA()
{
}
char NhomA::GetTen()
{
    return 'A';
}
bool NhomA::KTraDiTruyen(char me, char con)
{
    if (me == 'A')
    {
        if (con == 'A' || con == 'O')
        {
            return true;
        }
    }
    if (me == 'B')
    {
        if (con == 'A' || con == 'B' || con == 'C' || con == 'O')
        {
            return true;
        }
    }
    if (me == 'C')
    {
        if (con == 'A' || con == 'B' || con == 'C')
        {
            return true;
        }
    }
    if (me == 'O')
    {
        if (con == 'A' || con == 'O')
        {
            return true;
        }
    }
    return false;
}
bool NhomA::KTraTuongthich(char nm, bool c)
{
    if (GetRh() == false)
    {
        if (nm == 'A' || nm == 'C')
        {
            return true;
        }
    }
    else
    {
        if (c == true)
        {
            if (nm == 'A' || nm == 'C')
            {
                return true;
            }
        }
    }
    return false;
}
NhomB::NhomB()
{
}
NhomB::~NhomB()
{
}
char NhomB::GetTen()
{
    return 'B';
}
bool NhomB::KTraDiTruyen(char me, char con)
{
    if (me == 'A')
    {
        if (con == 'A' || con == 'B' || con == 'C' || con == 'O')
        {
            return true;
        }
    }
    if (me == 'B')
    {
        if (con == 'B' || con == 'O')
        {
            return true;
        }
    }
    if (me == 'C')
    {
        if (con == 'A' || con == 'B' || con == 'C')
        {
            return true;
        }
    }
    if (me == 'O')
    {
        if (con == 'B' || con == 'O')
        {
            return true;
        }
    }
    return false;
}
bool NhomB::KTraTuongthich(char nm, bool c)
{
    if (GetRh() == false)
    {
        if (nm == 'B' || nm == 'C')
        {
            return true;
        }
    }
    else
    {
        if (c == true)
        {
            if (nm == 'B' || nm == 'C')
            {
                return true;
            }
        }
    }
    return false;
}
NhomC::NhomC()
{
}
NhomC::~NhomC()
{
}
char NhomC::GetTen()
{
    return 'C';
}
bool NhomC::KTraDiTruyen(char me, char con)
{
    if (me == 'A')
    {
        if (con == 'A' || con == 'B' || con == 'C')
        {
            return true;
        }
    }
    if (me == 'B')
    {
        if (con == 'A' || con == 'B' || con == 'C')
        {
            return true;
        }
    }
    if (me == 'C')
    {
        if (con == 'A' || con == 'B' || con == 'C')
        {
            return true;
        }
    }
    if (me == 'O')
    {
        if (con == 'A' || con == 'B')
        {
            return true;
        }
    }
    return false;
}
bool NhomC::KTraTuongthich(char nm, bool c)
{
    if (GetRh() == false)
    {
        if (nm == 'C')
        {
            return true;
        }
    }
    else
    {
        if (c == true && nm == 'C')
        {
            return true;
        }
    }
    return false;
}
NhomO::NhomO()
{
}
NhomO::~NhomO()
{
}
char NhomO::GetTen()
{
    return 'O';
}
bool NhomO::KTraDiTruyen(char me, char con)
{
    if (me == 'A')
    {
        if (con == 'A' || con == 'O')
        {
            return true;
        }
    }
    if (me == 'B')
    {
        if (con == 'B' || con == 'O')
        {
            return true;
        }
    }
    if (me == 'C')
    {
        if (con == 'A' || con == 'B')
        {
            return true;
        }
    }
    if (me == 'O')
    {
        if (con == 'O')
        {
            return true;
        }
    }
    return false;
}
bool NhomO::KTraTuongthich(char nm, bool c)
{
    if (GetRh() == false)
    {
        return true;
    }
    else
    {
        if (c == true)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    cout << "Nhap so luong nguoi: ";
    cin >> n;
    vector<string> ten(n);
    vector<NhomMau *> danhSach(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap thong tin cho nguoi thu " << i + 1 << endl;
        cout << "Nhap ten: ";
        cin.ignore();
        getline(cin, ten[i]);

        char mau;
        cout << "Nhap nhom mau: ";
        cin >> mau;
        if (mau == 'A')
        {
            danhSach[i] = new NhomA();
        }
        else if (mau == 'B')
        {
            danhSach[i] = new NhomB();
        }
        else if (mau == 'C')
        {
            danhSach[i] = new NhomC();
        }
        else if (mau == 'O')
        {
            danhSach[i] = new NhomO();
        }
        danhSach[i]->Nhap();
    }

    int cha, me, con;
    cout << "Nhap so thu tu cua cha me con: " << endl;
    cout << "Nhap so thu tu cha:";
    cin >> cha;
    cout << "Nhap so thu tu me:";
    cin >> me;
    cout << "Nhap so thu tu con:";
    cin >> con;
    cha--;
    me--;
    con--;
    cout << "==========================" << endl;
    bool hopleCha = danhSach[cha]->KTraDiTruyen(danhSach[me]->GetTen(), danhSach[con]->GetTen());
    bool hopleMe = danhSach[me]->KTraDiTruyen(danhSach[cha]->GetTen(), danhSach[con]->GetTen());
    bool hopleRh = true;

    if (!danhSach[cha]->GetRh() && !danhSach[me]->GetRh() && danhSach[con]->GetRh())
    {
        hopleRh = false;
    }

    if (hopleCha && hopleMe && hopleRh)
    {
        cout << "Nhom mau hop le voi luat di truyen" << endl;
    }
    else
    {
        cout << "Nhom mau khong hop le voi luat duy truyen" << endl;
    }
    cout << "==========================" << endl;
    cout << "KIEM TRA CHO MAU" << endl;
    int x;
    cout << "Nhap nguoi can nhan mau(1 2 3):";
    cin >> x;
    x--;
    cout << "Nhung nguoi co the cho mau:" << endl;
    bool choMau = false;
    for (int i = 0; i < n; i++)
    {
        if (i != x)
        {
            if (danhSach[x]->KTraTuongthich(danhSach[i]->GetTen(), danhSach[i]->GetRh()))
            {
                cout << ten[i] << " " << danhSach[i]->GetTen();
                if (danhSach[i]->GetRh())
                {
                    cout << "+";
                }
                else
                {
                    cout << "-";
                }
                cout << endl;
                choMau = true;
            }
        }
    }
    if (!choMau)
    {
        cout << "Khong co ai cho mau" << endl;
    }
    for (int i = 0; i < n; i++)
    {
        delete danhSach[i];
    }
    return 0;
}
