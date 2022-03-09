#include <iostream>

using namespace std;

class CThoigian
{
    private:
        int gio;
        int phut;
        int giay;
    public:
        CThoigian();
        CThoigian(int,int,int);
        CThoigian(const CThoigian&);
        ~CThoigian();
};

CThoigian::CThoigian()
{
    gio=1;
    phut=1;
    giay=1;
}

CThoigian::CThoigian(const CThoigian&x)
{
    gio = x.gio;
    phut = x.phut;
    giay = x.giay;
}

CThoigian::CThoigian(int hour,int minute,int second)
{
    gio=hour;
    phut=minute;
    giay=second;
}
CThoigian::~CThoigian()
{
    return;
}