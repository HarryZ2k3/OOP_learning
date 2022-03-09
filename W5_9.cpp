#include <iostream>

using namespace std;

class CSoPhuc
{
    private:
        int a;
        int b;
        int z;
    public:
        CSoPhuc();
        CSoPhuc(int,int,int);
        CSoPhuc(const CSoPhuc&);
        ~CSoPhuc();
};

CSoPhuc::CSoPhuc()
{
    a = 0;
    b = 0;
    z = 0;
}
CSoPhuc::CSoPhuc(const CSoPhuc&x)
{
    a=x.a;
    b=x.b;
    z=x.z;
}

CSoPhuc::CSoPhuc(int x, int y, int z)
{
    x=a;
    y=b;
    z=z;
}

CSoPhuc::~CSoPhuc()
{
    return;
}