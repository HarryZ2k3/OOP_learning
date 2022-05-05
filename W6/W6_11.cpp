#include <iostream>

using namespace std;

class CTamGiac
{
    private:
        int x1;
        int y1;
        int y2;
        int x2;
        int x3;
        int y3;
    public:
        CTamGiac& operator=(const CTamGiac &);
};
CTamGiac& CTamGiac::operator=(const CTamGiac &a)
{
    x1 = a.x1;
    y1 = a.y1;
    x2 = a.x2;
    y2 = a.y2;
    x3 = a.x3;
    y3 = a.y3;
    return *this;
}
