#include <iostream>

using namespace std;

class CDuongTron
{
    private:
        int a;
        int b;
        int R;
    public:
        CDuongTron& operator=(const CDuongTron &);
};
CDuongTron& CDuongTron::operator=(const CDuongTron &x)
{
    a = x.a;
    b = x.b;
    R = x.R;
    return *this;
}
