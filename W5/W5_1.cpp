#include <iostream>

using namespace std;

class CPhanSo
{
    private:
        int tu;
        int mau;
    public:
        CPhanSo();
        CPhanSo(int,int);
        CPhanSo(const CPhanSo&);
        ~CPhanSo();
};

CPhanSo::CPhanSo()
{
    tu=0;
    mau=1;
}

CPhanSo::CPhanSo(const CPhanSo&x)
{
    tu = x.tu;
    mau=x.mau;
}

CPhanSo::CPhanSo(int t,int m)
{
    tu = t;
    mau = m;
}
CPhanSo::~CPhanSo()
{
    return;
}