#include <iostream>

using namespace std;

class CPhanSo 
{
    private:
        int tu;
        int mau;
    public:
        friend istream& operator>>(istream&,CPhanSo&);
        friend ostream& operator<<(ostream&,CPhanSo&);
        CPhanSo Tong(CPhanSo);
        CPhanSo operator+ (CPhanSo);
        CPhanSo operator- (CPhanSo); 
        CPhanSo operator* (CPhanSo);
        CPhanSo operator/ (CPhanSo);
        CPhanSo operator+= (CPhanSo);
        CPhanSo operator-= (CPhanSo);
        CPhanSo operator*= (CPhanSo);
        CPhanSo operator/= (CPhanSo);
        CPhanSo operator++ (int);
        CPhanSo operator-- (int);
        CPhanSo operator++ ();

}; 

istream& operator>>(istream& is, CPhanSo& ps)
{
    cout<<"Nhap tu so"<<endl;
    is>>ps.tu;
    cout<<"Nhap mau so"<<endl;
    is>>ps.mau;
    return is;
}

ostream& operator<<(ostream&os,CPhanSo& ps)
{
    os<<ps.tu<<"/"<<ps.mau<<endl;
    return os;
}
CPhanSo CPhanSo::operator++(int)
{
    CPhanSo temp = *this;
    this->tu+=mau;
    return temp;
}
CPhanSo CPhanSo::operator++ ()
{
    this->tu+=mau;
    return *this;
}

int main ()
{
    CPhanSo a,b,c,d;
    cin>>a>>b;
    c=a++;
    d=++b;
    cout<<b<<d;
    cout<<c;
    cout<<a;
    return 0;
}