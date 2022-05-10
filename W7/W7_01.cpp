#include <iostream>

using namespace std;

class CPhanSo 
{
    private:
        int tu;
        int mau;
    public:
        CPhanSo Tong(CPhanSo);
        CPhanSo operator+ (CPhanSo);
        CPhanSo operator- (CPhanSo); 
        CPhanSo operator* (CPhanSo);
        CPhanSo operator/ (CPhanSo);
        CPhanSo operator+= (CPhanSo);
        CPhanSo operator-= (CPhanSo);
        CPhanSo operator*= (CPhanSo);
        CPhanSo operator/= (CPhanSo);
        CPhanSo operator++ (CPhanSo);
        CPhanSo operator-- (CPhanSo);
}; 



int main ()
{
    CPhanSo a,b,kq;
    cin >> a>>b;
    kq=a+b;
    cout << "Tong: " <<kq;
    kq=a-b;
    cout << "Hieu: " <<kq;
    kq=a*b;
    cout << "Tich: " <<kq;
    kq=a/b;
    cout << "Thuong: " <<kq;
    b+=a;
    kq = b;
    cout << "Tong (Using +=): " <<kq;
    b-=a;
    kq =b;
    cout << "Hieu (Using -=): " <<kq;
    kq=a;
    kq++;
    cout << "a+1 (using ++) " <<kq;
    kq=b;
    kq--;
    cout << "b-1 (using --) " <<kq;
    return 0;
}