#include <iostream>

using namespace std;

class CSoPhuc
{
    private:
        int a;
        int b;
        int Z;
        int cach;
    public:
        friend istream& operator>>(istream &is,CSoPhuc&a);
        friend ostream& operator<<(ostream &os,CSoPhuc&a);
        CSoPhuc operator-(CSoPhuc);
        int operator>(CSoPhuc);
        int operator<(CSoPhuc);
        int operator>=(CSoPhuc);
        int operator<=(CSoPhuc);
        int operator==(CSoPhuc);
        int operator!=(CSoPhuc);
};
istream& operator>>(istream &is,CSoPhuc &a)
{
    cout << "Nhap diem b:" << endl;
    is >> a.b;
    cout << "Nhap diem a" << endl;
    is >> a.a;
    cout << "Nhap diem R" << endl;
    is >> a.Z;
    return is;
}

ostream& operator<<(ostream &os,CSoPhuc &x)
{
    cout << "b";
    os << x.b;
    cout << endl << "a";
    os << x.a;
    cout << endl << "R ";
    os << x.Z;
    return os;
}
CSoPhuc CSoPhuc::operator-(CSoPhuc x)
{
    CSoPhuc temp;
    temp.cach = (a-x.a);
    return temp;
}

int CSoPhuc::operator>(CSoPhuc x)
{
    CSoPhuc temp = *this-x;
    if (temp.cach>50)
        return 1;
    else 
        return 0;
}

int CSoPhuc::operator<(CSoPhuc x)
{
    CSoPhuc temp = *this-x;
    if (temp.cach<50)
        return 1;
    else 
        return 0;
}

int CSoPhuc::operator<=(CSoPhuc x)
{
   CSoPhuc temp = *this-x;
    if (temp.cach<=50)
        return 1;
    else 
        return 0;
}

int CSoPhuc::operator>=(CSoPhuc x)
{
    CSoPhuc temp = *this-x;
    if (temp.cach>=50)
        return 1;
    else 
        return 0;
}

int CSoPhuc::operator==(CSoPhuc x)
{
    CSoPhuc temp = *this-x;
    if (temp.cach == 50)
        return 1;
    else 
        return 0;
}

int CSoPhuc::operator!=(CSoPhuc x)
{
    CSoPhuc temp = *this-x;
    if (temp.cach!=50)
        return 1;
    else 
        return 0;
}

int main()
{
    
    return 0;
}