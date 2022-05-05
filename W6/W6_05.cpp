#include <iostream>

using namespace std;

class CDonThuc
{
    private:
        int x;
        int y;
        int z;
    public:
        CDonThuc& operator=(const CDonThuc &);
};
CDonThuc& CDonThuc::operator=(const CDonThuc &a)
{
    x = a.x;
    y = a.y;
    z = a.z;
    return *this;
}
