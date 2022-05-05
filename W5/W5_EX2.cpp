#include <iostream>

using namespace std;

class Ngay
{
    private:
        int ngay;
        int thang;
        int nam;
    public:
        Ngay();
        Ngay(int,int,int);
        Ngay(const Ngay&);
};

Ngay::Ngay()
{
    ngay = 1;
    thang = 1;
    nam = 2000;
}

Ngay::Ngay(const Ngay&x)
{
    ngay=x.ngay;
    thang=x.thang;
    nam=x.nam;
}

Ngay::Ngay(int d,int m, int y)
{
    ngay = d;
    thang = m;
    nam = y;
}