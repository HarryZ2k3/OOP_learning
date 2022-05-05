#include <iostream>

using namespace std;

class CDiemKhongGian
{
    private:
        int x;
        int y;
        int z;
    public:
        CDiemKhongGian& operator=(const CDiemKhongGian &);
};
CDiemKhongGian& CDiemKhongGian::operator=(const CDiemKhongGian &a)
{
    x = a.x;
    y = a.y;
    z = a.z;
    return *this;
}
