#include <iostream>

using namespace std;

class CDiemKhongGian
{
    private:
        int x;
        int y;
        int z;
    public:
        CDiemKhongGian();
        CDiemKhongGian(int,int,int);
        CDiemKhongGian(const CDiemKhongGian&);
        ~CDiemKhongGian();
};

CDiemKhongGian::CDiemKhongGian()
{
    x = 0;
    y = 0;
    z = 0;
}
CDiemKhongGian::CDiemKhongGian(const CDiemKhongGian&a)
{
    x=a.x;
    y=a.y;
    z=a.z;
}

CDiemKhongGian::CDiemKhongGian(int a, int b, int c)
{
    x=a;
    y=b;
    z=c;
}

CDiemKhongGian::~CDiemKhongGian()
{
    return;
}