#include <iostream>

using namespace std;

class CNgay
{
    private:
        int ngay;
        int thang;
        int nam;
    public:
        CNgay();
        CNgay(int,int,int);
        CNgay(const CNgay&);
        ~CNgay();
};

CNgay::CNgay()
{
    ngay=1;
    thang=1;
    nam=2000;
}

CNgay::CNgay(const CNgay&x)
{
    ngay = x.ngay;
    thang = x.thang;
    nam = x.nam;
}

CNgay::CNgay(int date,int month,int year)
{
    ngay=date;
    thang=month;
    nam=year;
}
CNgay::~CNgay()
{
    return;
}