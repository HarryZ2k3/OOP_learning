#include <iostream>

using namespace std;

class CTamGiac
{
    private:
        int x1;
        int y1;
        int x2;
        int y2;
        int x3;
        int y3;
    public:
        CTamGiac();
        CTamGiac(int,int,int,int,int,int);
        CTamGiac(const CTamGiac&);
        ~CTamGiac();
};

CTamGiac::CTamGiac()
{
    x1 = 0;
    y1 = 0;
    x2 = 0;
    y2 = 0;
    x3 = 0;
    y3 = 0;
}
CTamGiac::CTamGiac(const CTamGiac&a)
{
    x1=a.x1;
    y1=a.y1;
    x2=a.x2;
    y2=a.y2;
    x3=a.x3;
    y3=a.y3;
}

CTamGiac::CTamGiac(int a, int b, int c,int d,int e,int f)
{
    x1=a;
    y1=b;
    x2=c;
    y2=d;
    x3=e;
    y3=f;
}

CTamGiac::~CTamGiac()
{
    return;
}