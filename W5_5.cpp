#include <iostream>

using namespace std;

class CDonThuc
{
    private:
        int x;
        int y;
        int z;
    public:
        CDonThuc();
        CDonThuc(int,int,int);
        CDonThuc(const CDonThuc&);
        ~CDonThuc();
};

CDonThuc::CDonThuc()
{
    x = 0;
    y = 0;
    z = 0;
}
CDonThuc::CDonThuc(const CDonThuc&a)
{
    x=a.x;
    y=a.y;
    z=a.z;
}

CDonThuc::CDonThuc(int a, int b, int c)
{
    x=a;
    y=b;
    z=c;
}

CDonThuc::~CDonThuc()
{
    return;
}