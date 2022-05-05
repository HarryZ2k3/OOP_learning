#include <iostream>

using namespace std;

class CThoiGian
{
    private:
        int giay;
        int phut;
        int gio;
    public:
        CThoiGian& operator=(const CThoiGian &);
};
CThoiGian& CThoiGian::operator=(const CThoiGian &x)
{
    giay = x.giay;
    phut = x.phut;
    gio = x.gio;
    return *this;
}
