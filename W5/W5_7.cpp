#include <iostream>

using namespace std;

class CDuongThang
{
    private:
        int x1;
        int y1;
        int x2;
        int y2;
    public:
        CDuongThang();
        CDuongThang(int,int,int,int);
        CDuongThang(const CDuongThang&);
        ~CDuongThang();
};

CDuongThang::CDuongThang()
{
    x1 = 0;
    y1 = 0;
    x2 = 0;
    y2 = 0;
}
CDuongThang::CDuongThang(const CDuongThang&a)
{
    x1=a.x1;
    y1=a.y1;
    x2=a.x2;
    y2=a.y2;
}

CDuongThang::CDuongThang(int a, int b, int c,int d)
{
    x1=a;
    y1=b;
    x2=c;
    y2=d;
}

CDuongThang::~CDuongThang()
{
    return;
}