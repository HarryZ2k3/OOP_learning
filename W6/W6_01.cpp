#include <iostream>

using namespace std;

class CPhanSo
{
    private:
        int tu;
        int mau;
    public:
        CPhanSo& operator=(const CPhanSo &);
};
CPhanSo& CPhanSo::operator=(const CPhanSo &x)
{
    tu=x.tu;
    mau=x.mau;
    return *this;
}
