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
        void compare(Phanso);
};

void Phanso::input()
{
    cout << "Nhap phan so: ";
    cin >> tu >> mau;
}

void Phanso::compare(Phanso P)
{
    float temp1 =  (float)tu/mau;
    float temp2 =  (float)P.tu/P.mau;
    if (temp1 < temp2)
    {
        cout << tu <<'/' << mau << " be hon " << P.tu << '/' << P.mau;
    }
    else if (temp1 > temp2)
    {
        cout << tu <<'/' << mau << " lon hon " << P.tu << '/' << P.mau;
    }
    else if (temp1 = temp2)
    {
        cout << tu <<'/' << mau << " bang " << P.tu << '/' << P.mau;
    }
}

int main()
{
    Phanso a,b;
    a.input();
    b.input();
    a.compare(b);
    return 0;
}