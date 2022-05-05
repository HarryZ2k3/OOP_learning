#include <iostream>

using namespace std;

class CSoPhuc
{
    private:
        int a;
        int b;
        int z;
    public:
        CSoPhuc& operator=(const CSoPhuc &);
};
CSoPhuc& CSoPhuc::operator=(const CSoPhuc &x)
{
    a = x.a;
    b = x.b;
    z = x.z;
    return *this;
}
