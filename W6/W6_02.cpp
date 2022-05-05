#include <iostream>

using namespace std;

class CDiem
{
    private:
        int anh;
        int toan;
        int van;
    public:
        CDiem& operator=(const CDiem &);
};
CDiem& CDiem::operator=(const CDiem &x)
{
    anh = x.anh;
    toan = x.toan;
    van = x.van;
    return *this;
}
