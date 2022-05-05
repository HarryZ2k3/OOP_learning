#include <iostream>
#include <cmath>

using namespace std;

class SoPhuc
{
    private:
        int a;
        int b;
    public:
        void input();
        void tong(SoPhuc);
        void hieu(SoPhuc);
        void tich(SoPhuc);
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

void SoPhuc::input()
{
    cout << "Nhap so phuc a,b theo dang z=a+bi: ";
    cin >> a >> b;
}

void SoPhuc::tong(SoPhuc T)
{
    int tong_a= a + T.a;
    int tong_b= b + T.b;
    cout << "z+z'=" << tong_a << " + " << tong_b << "i" <<endl;
}

void SoPhuc::hieu(SoPhuc T)
{
    int hieu_a= a - T.a;
    int hieu_b= b - T.b;
    cout << "z-z'=" << hieu_a << "-" << hieu_b << "i" <<endl;
}

void SoPhuc::tich(SoPhuc T)
{
    cout << "z*z'=" << a*T.a - b*T.b << "+" << a*T.b + T.a*b << "i" << endl;
}
int main ()
{
    SoPhuc A,B;
    A.input();
    B.input();
    A.tong(B);
    A.hieu(B);
    A.tich(B);
}