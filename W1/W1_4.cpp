#include <iostream>
#include <math.h>

using namespace std;

struct Phanso
{
    int a1,b1,a2,b2;
};
typedef struct Phanso PHANSO;

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
    n2 = n2/ucln;
}

void input(PHANSO& a)
{
    cin >> a.a1 >> a.b1 >> a.a2 >> a.b2;
}

void tong(PHANSO& a)
{
    int tong_a = a.a1+a.a2;
    int tong_b = a.b1+a.b2;
    cout << "z+z'= " << tong_a << "+" << tong_b << endl;
}

void hieu(PHANSO& a)
{
    int hieu_a = a.a1-a.a2;
    int hieu_b = a.b1-a.b2;
    cout << "z-z'= " << hieu_a << "+" << hieu_b  <<"i"<< endl;
}

void tich(PHANSO& a)
{
    cout << "z.z'= " << a.a1*a.a2 -a.b1*a.b2 << "+" << a.a1*a.b2+a.a2*a.b1 <<"i" <<endl;
}

void thuong(PHANSO& a)
{
    int tu3 =  a.a1*a.b2;
    int mau3 = a.b1*a.a2;
    Rutgon(tu3,mau3);
    cout << a.a1 << "/" << a.b1 << "*" << a.a2 << "/"<< a.b2 << "=" << ;
}

int main()
{
    cout << "nhap tu va mau cua 2 phan so ban can tim theo thu tu tu1 mau1 ; tu2 mau2";
    PHANSO ps;
    input(ps);
    tong(ps);
    hieu(ps);
    tich(ps);
    thuong(ps);

    return 0;
}