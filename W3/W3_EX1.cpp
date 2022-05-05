#include <iostream>
#include <string>
using namespace std;

class Hocsinh
{
    private:
        string hoten;
        int toan;
        int van;
        float dtb;
    public:
        void Nhap();
        void Xuat();
        void XuLy();
};

void Hocsinh::Nhap()
{
    getline(cin,hoten);
    cin>>toan;
    cin>>van;
}

void Hocsinh::XuLy()
{
    dtb=(float)(toan+van)/2;
}

void Hocsinh::Xuat()
{
    cout << dtb;
}

int main ()
{
    Hocsinh hs;
    hs.Nhap();
    hs.XuLy();
    hs.Xuat();
    return 1;
}