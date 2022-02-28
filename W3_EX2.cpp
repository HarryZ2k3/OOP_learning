#include <iostream>
#include <cmath>

using namespace std;

class Phanso
{
    private:
        int mau;
        int tu;
        int ucln;
    public:
        void input();
        void process();
        void output();
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
void Phanso::input()
{
	cin >> tu >> mau;
}

void Phanso::process()
{
    int ucln = UCLN(tu,mau);
    tu = tu/ucln;
    mau = mau/ucln;
}

void Phanso::output()
{
    cout << tu <<"/" << mau;
}


int main()
{
    Phanso ps;
    ps.input();
    ps.process();
    ps.output();
    return 1;
}