#include <iostream>

using namespace std;

class CNgay
{
    private:
        int ngay;
        int thang;
        int nam;
    public:
        CNgay& operator=(const CNgay &);
};
CNgay& CNgay::operator=(const CNgay &x)
{
    ngay = x.ngay;
    thang = x.thang;
    nam = x.nam;
    return *this;
}
