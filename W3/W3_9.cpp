#include <iostream>
#include <cmath>

using namespace std;

class Phanso
{
    private:
        int tu;
        int mau;
    public:
        void input();
        void tong(Phanso);
        void hieu(Phanso);
        void tich(Phanso);
        void thuong(Phanso);

};

int UCLN (int x,int y)
{
    if (x < 0)
	{
		x *= -1;
	}
	if (y < 0)
	{
		y *= -1;
	}

	while (x != y)
	{
		if (x > y)
		{
			x = x - y;
		}
		else
		{
			y = y - x;
		}
	}
	return x;
}

void Rutgon (int n1,int n2)
{
    int ucln = UCLN(n1,n2);
    n1=n1/ucln;
    n2=n2/ucln;
}

void Phanso::input()
{
    cout << "Nhap phan so: ";
    cin >> tu >> mau;
}

void Phanso::tong(Phanso P)
{
    int mau_chung = mau*P.mau;
    int kq_tu = tu*(mau_chung/mau)+ P.tu*(mau_chung/P.mau);
    Rutgon(kq_tu,mau_chung);
    cout << "Tong:" << "/" << mau_chung <<endl;
}

void Phanso::hieu(Phanso P)
{
    int mau_chung = mau*P.mau;
    int kq_tu= tu * (mau_chung/mau) - P.tu * (mau_chung/P.mau);
    Rutgon(kq_tu,mau_chung);
    cout << "Hieu:" <<kq_tu << "/" << mau_chung << endl;
}

void Phanso::tich(Phanso P)
{
    int tich_tu = tu*P.tu;
    int tich_mau = mau*P.mau;
    
    Rutgon(tich_tu,tich_mau);
    cout << "Tich:" <<tich_tu << "/" << tich_mau << endl;
}

void Phanso::thuong(Phanso P)
{
    int kq_tu = tu * P.mau;
    int kq_mau = mau * P.tu;
    Rutgon(kq_tu,kq_mau);
    cout << "Thuong: " << kq_tu << "/" << kq_mau << endl;
}

int main()
{
    Phanso a,b;
    a.input();
    b.input();
    a.tong(b);
    a.hieu(b);
    a.thuong(b);
    return 0;
}