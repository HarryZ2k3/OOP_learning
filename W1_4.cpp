#include <iostream>
#include <math.h>

using namespace std;

struct Sophuc
{
    int a1,b1,a2,b2;
};
typedef struct Sophuc SOPHUC;

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

void input(SOPHUC& a)
{
    cin >> a.a1 >> a.b1 >> a.a2 >> a.b2;
}

void tong(SOPHUC& a)
{
    int tong_a = a.a1+a.a2;
    int tong_b = a.b1+a.b2;
    cout << "z+z'= " << tong_a << "+" << tong_b << endl;
}

void hieu(SOPHUC& a)
{
    int hieu_a = a.a1-a.a2;
    int hieu_b = a.b1-a.b2;
    cout << "z-z'= " << hieu_a << "+" << hieu_b  <<"i"<< endl;
}

void tich(SOPHUC& a)
{
    cout << "z.z'= " << a.a1*a.a2 -a.b1*a.b2 << "+" << a.a1*a.b2+a.a2*a.b1 <<"i" <<endl;
}

void thuong(SOPHUC& a)
{
    int mau1=a.a1*a.a1+a.b1*a.b1;
    int mau2=a.a1*a.a1+a.b1*a.b1;
    int tu1 = a.a2*a.a1+a.b2*a.b1;
    int tu2 = a.a1*a.b2-a.a2*a.b1;
    Rutgon(tu1,mau1);
    Rutgon(tu2,mau2);
    cout << "z/z'" << tu1 <<"/" << mau1 << "+" << tu2 <<"/" << mau2 << endl;
}

int main()
{
    cout << "Nhap so 2 so phuc co dang z = a + bi va z' = a' +b'i:";
    SOPHUC ps;
    input(ps);
    tong(ps);
    hieu(ps);
    tich(ps);
    thuong(ps);

    return 0;
}