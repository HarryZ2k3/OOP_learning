#include <iostream>

using namespace std;

class CDaThuc 
{
    private:
        int x;
        int y;
        int z;
    public:
        CDaThuc Tong(CDaThuc);
        CDaThuc operator+ (CDaThuc);
        CDaThuc operator- (CDaThuc); 
        CDaThuc operator* (CDaThuc);
        CDaThuc operator/ (CDaThuc);
        CDaThuc operator+= (CDaThuc);
        CDaThuc operator-= (CDaThuc);
        CDaThuc operator*= (CDaThuc);
        CDaThuc operator/= (CDaThuc);
        CDaThuc operator++ (CDaThuc);
        CDaThuc operator-- (CDaThuc);
}; 



int main ()
{

    return 0;
}