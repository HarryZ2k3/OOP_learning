#include <iostream>

using namespace std;

class CDonThuc 
{
    private:
        int x;
        int y;
        int z;
    public:
        CDonThuc Tong(CDonThuc);
        CDonThuc operator* (CDonThuc);
        CDonThuc operator/ (CDonThuc);
        CDonThuc operator*= (CDonThuc);
        CDonThuc operator/= (CDonThuc);
}; 



int main ()
{

    return 0;
}