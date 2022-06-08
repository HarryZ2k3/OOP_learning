#include <iostream>

using namespace std;

class CHocSinh
{
    private:
        char hoten[31];
        int toan;
        int van;
        float dtb;
    public:
        friend istream& operator>>(istream &is,CHocSinh &x);
        friend ostream& operator<<(ostream &os,CHocSinh &x);
        int operator>(CHocSinh);
        int operator<(CHocSinh);
        int operator>=(CHocSinh);
        int operator<=(CHocSinh);
        int operator==(CHocSinh);
        int operator!=(CHocSinh);
};

istream& operator>>(istream &is,CHocSinh &x)
{
    cout << "Nhap diem toan: " << endl;
    is >>x.toan;
    cout << "Nhap diem van: "<< endl;
    is >>x.van;
    x.dtb = (x.toan+x.van)/2;
    return is;
}

ostream& operator<<(ostream &os,CHocSinh &x)
{
    cout<<"Diem trung binh la: ";
    os<<x.dtb;
    return os;
}

int CHocSinh::operator>(CHocSinh x)
{
    if(dtb>x.dtb)
        return 1;
    return 0;
}

int CHocSinh::operator<(CHocSinh x)
{
    if(dtb<x.dtb)
        return 1;
    return 0;
}

int CHocSinh::operator>=(CHocSinh x)
{
    if(dtb>=x.dtb)
        return 1;
    return 0;
}

int CHocSinh::operator<=(CHocSinh x)
{
    if(dtb<=x.dtb)
        return 1;
    return 0;
}

int CHocSinh::operator==(CHocSinh x)
{
    if(dtb==x.dtb)
        return 1;
    return 0;
}

int CHocSinh::operator!=(CHocSinh x)
{
    if(dtb!=x.dtb)
        return 1;
    return 0;
}

int main()
{
    CHocSinh a,b;
    cin>>a>>b;
    cout<<a<<endl;
    cout<<b<<endl;

    if (a>b)
        cout<<"DTB a lon hon DTB b";
    else
        cout<<"DTB a ko lon hon DTB b";
    return 0;
}