#include <iostream>

using namespace std;

class CHinhCau
{
    private:
        int a;
        int b;
        int c;
        int R;
    public:
        CHinhCau();
        CHinhCau(int,int,int,int);
        CHinhCau(const CHinhCau&);
        ~CHinhCau();
};

CHinhCau::CHinhCau()
{
    a = 0;
    b = 0;
    c = 0;
    R = 0;
}
CHinhCau::CHinhCau(const CHinhCau&x)
{
    a=x.a;
    b=x.b;
    c=x.c;
    R=x.R;
}

CHinhCau::CHinhCau(int x, int y, int z, int R)
{
    x=a;
    y=b;
    z=c;
    R=R;
}

CHinhCau::~CHinhCau()
{
    return;
}