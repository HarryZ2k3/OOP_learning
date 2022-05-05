#include <iostream>
#include <math.h>

using namespace std;

struct Phanso
{
    int tu1,mau1,tu2,mau2;
};
typedef struct Phanso PHANSO;

void input(PHANSO& a)
{
    cin >> a.tu1 >> a.mau1 >> a.tu2 >> a.mau2;
}

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

void Rutgon (int &n1,int &n2)
{
    int ucln = UCLN(n1,n2);
    n1 = n1/ucln;
    n2= n2/ucln;
}

void tong(PHANSO& a)
{
    int mau_chung;
    mau_chung = a.mau1*a.mau2;
    int kq_tu= a.tu1 * (mau_chung/a.mau1)+ a.tu2 * (mau_chung/a.mau2);
    Rutgon(kq_tu,mau_chung);
    cout << "Tong:" <<kq_tu << "/" << mau_chung << endl;
}

void hieu(PHANSO& a)
{
    int mau_chung = a.mau1*a.mau2;
    int kq_tu= a.tu1 * (mau_chung/a.mau1) - a.tu2 * (mau_chung/a.mau2);
    Rutgon(kq_tu,mau_chung);
    cout << "Hieu:" <<kq_tu << "/" << mau_chung << endl;
}

void tich(PHANSO& a)
{
    int tich_tu = a.tu1*a.tu2;
    int tich_mau = a.mau1*a.mau2;
    
    Rutgon(tich_tu,tich_mau);
    cout << "Tich:" <<tich_tu << "/" << tich_mau << endl;
}

void thuong(PHANSO& a)
{
    int kq_tu = a.tu1 * a.mau2;
    int kq_mau = a.mau1 * a.tu2;
    Rutgon(kq_tu,kq_mau);
    cout << "Thuong: " << kq_tu << "/" << kq_mau << endl;
}

int main()
{
    PHANSO ps;
    input(ps);
    tong(ps);
    hieu(ps);
    tich(ps);
    thuong(ps);

    return 0;
}