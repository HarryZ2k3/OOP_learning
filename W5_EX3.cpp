#include <iostream>

using namespace std;

class CPhanSo 
{
    private:
        int tu;
        int mau;
    public:
        ~CPhanSo();//phuong thuc pha huy (destructor)
};

CPhanSo::~CPhanSo()
{
    return;
}