#include <iostream>

using namespace std;
struct Phanso
{
    int mau;
    int tu;
};
typedef struct Phanso PHANSO;

void input(PHANSO& a)
{
    cin >> a.tu >> a.mau;
    if(a.mau==0)
    {
        cout << "mau phai khac 0. Nhap lai";
    }
}

void print(PHANSO a)
{
    if(a.tu ==0)
    {
        cout << "Bang khong";
    }
    else if(a.tu<0 || a.mau >0 )
    {
        cout << "Am";
    }
    else
    {
        cout << "Duong";
    }
}
int main() 
{
    PHANSO kq;
    input(kq);
    print(kq);
    return 0;
}
