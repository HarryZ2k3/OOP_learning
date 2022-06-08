#include <iostream>

using namespace std;

class CHonSo
{
    private:
        int tu;
        int mau;
        int PhanNguyen;
        float tong;
    public:
        friend istream& operator>>(istream &is,CHonSo&x);
        friend ostream& operator<<(ostream &os,CHonSo&x);
        CHonSo operator-(CHonSo);
        int operator>(CHonSo);
        int operator<(CHonSo);
        int operator>=(CHonSo);
        int operator<=(CHonSo);
        int operator==(CHonSo);
        int operator!=(CHonSo);
};

CHonSo CHonSo::operator-(CHonSo x)
{
    CHonSo temp;
    temp.tong = x.PhanNguyen+(x.tu/x.mau);
    return temp;
}

int CHonSo::operator>(CHonSo x)
{
    CHonSo temp = *this-x;
    if (temp.tu*temp.mau>0)
        return 1;
    else 
        return 0;
}

int CHonSo::operator<(CHonSo x)
{
    CHonSo temp = *this - x;
    if (temp.tu*temp.mau<0)
        return 1;
    else 
        return 0;
}

int CHonSo::operator<=(CHonSo x)
{
    CHonSo temp = *this - x;
    if (temp.tu*temp.mau<=0)
        return 1;
    else 
        return 0;
}

int CHonSo::operator>=(CHonSo x)
{
    CHonSo temp = *this - x;
    if (temp.tu*temp.mau>=0)
        return 1;
    else 
        return 0;
}

int CHonSo::operator==(CHonSo x)
{
    CHonSo temp = *this - x;
    if (temp.tu*temp.mau==0)
        return 1;
    else 
        return 0;
}

int CHonSo::operator!=(CHonSo x)
{
    CHonSo temp = *this - x;
    if (temp.tu*temp.mau!=0)
        return 1;
    else 
        return 0;
}

int main()
{
    
    return 0;
}