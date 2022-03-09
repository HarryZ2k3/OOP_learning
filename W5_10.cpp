#include <iostream>

using namespace std;

class CDuongTron
{
    private:
        int a;
        int b;
        int R;
    public:
        CDuongTron();
        CDuongTron(int,int,int);
        CDuongTron(const CDuongTron&);
        ~CDuongTron();
};

CDuongTron::CDuongTron()
{
    a = 0;
    b = 0;
    R = 1;
}
CDuongTron::CDuongTron(const CDuongTron&x)
{
    a=x.a;
    b=x.b;
    R=x.R;
}

CDuongTron::CDuongTron(int x, int y, int R)
{
    x=a;
    y=b;
    R=R;
}

CDuongTron::~CDuongTron()
{
    return;
}