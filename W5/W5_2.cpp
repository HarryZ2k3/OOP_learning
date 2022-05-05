#include <iostream>

using namespace std;

class CDiem
{
    private:
        float toan;
        float van;
        float anh;
    public:
        CDiem();
        CDiem(float, float, float);
        CDiem(const CDiem&);
        ~CDiem();
};

CDiem::CDiem()
{
    toan=0;
    van=0;
    anh=0;
}

CDiem::CDiem(const CDiem&x)
{
    toan=x.toan;
    van=x.van;
    anh=x.anh;
}
CDiem::CDiem(float m, float l, float e)
{
    toan=m;
    van=l;
    anh=e;
}

CDiem::~CDiem()
{
    return;
}