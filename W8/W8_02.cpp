#include <iostream>
#include <math.h>
using namespace std;

class CToaDo
{
    private:
        float tung;
        float hoanh;
        float khoang_cach;
    public:
        friend istream& operator>>(istream &is,CToaDo&x);
        friend ostream& operator<<(ostream &os,CToaDo&x);
        CToaDo operator-(CToaDo x);
        int operator>(CToaDo);
        int operator<(CToaDo);
        int operator>=(CToaDo);
        int operator<=(CToaDo);
        int operator==(CToaDo);
        int operator!=(CToaDo);
        CToaDo KhoangCach(CToaDo);
};

CToaDo CToaDo::KhoangCach(CToaDo x)
{
    CToaDo temp;
    temp.khoang_cach = (tung*x.tung+hoanh*x.hoanh);
    return temp;
}


istream& operator>>(istream &is,CToaDo &x)
{
    cout << "Nhap gia tri cua truc tung y=" << endl;
    is >> x.tung;
    cout << "Nhap gia tri cua truc hoanh:x=" << endl;
    is >> x.hoanh;
    return is;
}

ostream& operator<<(ostream &os,CToaDo &x)
{
    cout << "y=";
    os << x.tung;
    cout << endl << "x=";
    os << x.hoanh;
    cout << endl << "Khoang cach den goc toa do= ";
    os << x.khoang_cach;
    return os;
}

int CToaDo::operator>(CToaDo x)
{
    CToaDo temp = *this-x;
    if (temp.khoang_cach>0)
        return 1;
    else
        return 0;
}

int CToaDo::operator<(CToaDo x)
{
    CToaDo temp = *this-x;
    if (temp.khoang_cach<0)
        return 1;
    else
        return 0;
}

int CToaDo::operator>=(CToaDo x)
{
    CToaDo temp = *this-x;
    if (temp.khoang_cach>=0)
        return 1;
    else
        return 0;
}

int CToaDo::operator<=(CToaDo x)
{
    CToaDo temp = *this-x;
    if (temp.khoang_cach<=0)
        return 1;
    else
        return 0;
}

int CToaDo::operator==(CToaDo x)
{
    CToaDo temp = *this-x;
    if (temp.khoang_cach==0)
        return 1;
    else
        return 0;
}

int CToaDo::operator!=(CToaDo x)
{
    CToaDo temp = *this-x;
    if (temp.khoang_cach!=0)
        return 1;
    else
        return 0;
}


int main()
{
    CToaDo a,b;
    cin>>a>>b;
    if (KhoangCach(a) < KhoangCach(b))
        cout << a;
    else
        cout <<b;
    return 0;
}