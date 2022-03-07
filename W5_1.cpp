#include <iostream>

using namespace std;

class CPhanSo
{
    private:
        int tu;
        int mau;
    public:
    CPhanSo(); // phuong thuc thietlap mac dinh (default constructor)
    CPhanSo(int, int); // phuong thuc thiet lap khi biet thong tin (constructor)
    CPhanSo(const CPhanSo&); // Phuong thuc thiet lap sao chep (copy constructor)
};

CPhanSo::CPhanSo()
{
    tu = 0;
    mau = 1;
}

CPhanSo::CPhanSo(const CPhanSo&x)
{
    tu = x.tu;
    mau = x.mau;
}

CPhanSo::CPhanSo(int t,int m)
{
    tu = t;
    mau = m;
}