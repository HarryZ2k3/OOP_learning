#include <iostream>

using namespace std;
struct Phanso
{
    int mau;
    int tu;
};
typedef struct Phanso PHANSO;

void input(PHANSO& a)
{
    cin >> a.mau >> a.tu;
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

void process(PHANSO& a)
{
    if(a.mau==0)
    {
        cout << "mau phai khac 0. Nhap lai";
    }
    int ucln = UCLN(a.tu,a.mau);
    a.tu = a.tu/ucln;
    a.mau=a.mau/ucln;
}

void print(PHANSO a)
{
    cout << a.tu <<"/" << a.mau;
}
int main() 
{
    PHANSO kq;
    input(kq);
    process(kq);
    print(kq);
    return 0;
}
