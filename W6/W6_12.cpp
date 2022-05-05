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
        CHinhCau& operator=(const CHinhCau &);
};
CHinhCau& CHinhCau::operator=(const CHinhCau &x)
{
    a = x.a;
    b = x.b;
    c = x.c;
    R = x.R;
    return *this;
}
