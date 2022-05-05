#include <iostream>

using namespace std;

class CHocSinh
{
    private:
        string hoten;
        int toan;
        int van;
        float dtb;
    public:
        CHocSinh& operator=(const CHocSinh &);
};
CHocSinh& CHocSinh::operator=(const CHocSinh &x)
{
    hoten = x.hoten;
    toan = x.toan;
    van = x.van;
    dtb = x.dtb;
    return *this;
}
