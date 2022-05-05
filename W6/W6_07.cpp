#include <iostream>

using namespace std;

class CDuongThang
{
    private:
        int x1;
        int y1;
        int y2;
        int x2;
    public:
        CDuongThang& operator=(const CDuongThang &);
};
CDuongThang& CDuongThang::operator=(const CDuongThang &a)
{
    x1 = a.x1;
    y1 = a.y1;
    x2 = a.x2;
    y2 = a.y2;
    return *this;
}
