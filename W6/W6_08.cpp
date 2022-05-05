#include <iostream>

using namespace std;

class CHonSo
{
    private:
        int a;
        int b;
        int c;
    public:
        CHonSo& operator=(const CHonSo &);
};
CHonSo& CHonSo::operator=(const CHonSo &x)
{
    a = x.a;
    b = x.b;
    c = x.c;
    return *this;
}
