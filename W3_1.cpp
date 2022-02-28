#include <iostream>
#include <cmath>

using namespace std;

class Phanso
{
    private:
        int mau;
        int tu;
        int kq;
    public:
        void input();
        void check();
        void output();
};

void Phanso::input()
{
    cout << "Nhap tu so: ";
    cin >> tu;
    cout << "Nhap mau so: ";
    cin >> mau;
}

void Phanso::check()
{
    if(mau>0 && tu >0)
    {
        kq = 1;
    }
    else if (mau<0 || tu<0)
    {
        kq = -1;
    }
}

void Phanso::output()
{
    switch (kq)
    {
        case 1:
            cout << "Phan so duong";
            break;
        case -1:
            cout << "Phan so am";
            break;
        default:
            cout << "Phan so bang khong";
            break; 
    }
}

int main()
{
    Phanso ps;
    ps.input();
    ps.check();
    ps.output();
    return 1;
}