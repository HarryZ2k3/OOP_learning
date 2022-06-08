#include <iostream>

using namespace std;

class CPhanSo
{
    private:
        int tu;
        int mau;
    public:
        friend istream& operator>>(istream &is,CPhanSo&x);
        friend ostream& operator<<(ostream &os,CPhanSo&x);
        CPhanSo operator-(CPhanSo);
        int operator>(CPhanSo);
        int operator<(CPhanSo);
        int operator>=(CPhanSo);
        int operator<=(CPhanSo);
        int operator==(CPhanSo);
        int operator!=(CPhanSo);
};

CPhanSo CPhanSo::operator-(CPhanSo x)
{
    CPhanSo temp;
    temp.tu=tu*x.mau-mau*x.tu;
    temp.mau=mau*x.mau;
    return temp;
}

int CPhanSo::operator>(CPhanSo x)
{
    CPhanSo temp = *this-x;
    if (temp.tu*temp.mau>0)
        return 1;
    else 
        return 0;
}

int CPhanSo::operator<(CPhanSo x)
{
    CPhanSo temp = *this - x;
    if (temp.tu*temp.mau<0)
        return 1;
    else 
        return 0;
}

int CPhanSo::operator<=(CPhanSo x)
{
    CPhanSo temp = *this - x;
    if (temp.tu*temp.mau<=0)
        return 1;
    else 
        return 0;
}

int CPhanSo::operator>=(CPhanSo x)
{
    CPhanSo temp = *this - x;
    if (temp.tu*temp.mau>=0)
        return 1;
    else 
        return 0;
}

int CPhanSo::operator==(CPhanSo x)
{
    CPhanSo temp = *this - x;
    if (temp.tu*temp.mau==0)
        return 1;
    else 
        return 0;
}

int CPhanSo::operator!=(CPhanSo x)
{
    CPhanSo temp = *this - x;
    if (temp.tu*temp.mau!=0)
        return 1;
    else 
        return 0;
}

int main()
{
    
    return 0;
}