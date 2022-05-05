#include <iostream>

using namespace std;

class CHonSo
{
    private:
        int a;
        int b;
        int c;
    public:
        CHonSo();
        CHonSo(int,int,int);
        CHonSo(const CHonSo&);
        ~CHonSo();
};

CHonSo::CHonSo()
{
    a = 0;
    b = 0;
    c = 0;
}
CHonSo::CHonSo(const CHonSo&x)
{
    a=x.a;
    b=x.b;
    c=x.c;
}

CHonSo::CHonSo(int x, int y, int z)
{
    x=a;
    y=b;
    z=c;
}

CHonSo::~CHonSo()
{
    return;
}