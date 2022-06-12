#include <iostream>

using namespace std;

class CDonThuc
{
    private:
        int x;
        int y;
        int z;
        int cach;
    public:
        friend istream& operator>>(istream &is,CDonThuc&a);
        friend ostream& operator<<(ostream &os,CDonThuc&a);
        CDonThuc operator-(CDonThuc);
        int operator>(CDonThuc);
        int operator<(CDonThuc);
        int operator>=(CDonThuc);
        int operator<=(CDonThuc);
        int operator==(CDonThuc);
        int operator!=(CDonThuc);
};
istream& operator>>(istream &is,CDonThuc &a)
{
    cout << "Nhap diem y:" << endl;
    is >> a.y;
    cout << "Nhap diem x" << endl;
    is >> a.x;
    cout << "Nhap diem z" << endl;
    is >> a.z;
    return is;
}

ostream& operator<<(ostream &os,CDonThuc &a)
{
    cout << "y";
    os << a.y;
    cout << endl << "x";
    os << a.x;
    cout << endl << "z ";
    os << a.z;
    return os;
}
CDonThuc CDonThuc::operator-(CDonThuc a)
{
    CDonThuc temp;
    temp.cach = (x-a.x);
    return temp;
}

int CDonThuc::operator>(CDonThuc a)
{
    CDonThuc temp = *this-a;
    if (temp.cach>50)
        return 1;
    else 
        return 0;
}

int CDonThuc::operator<(CDonThuc a)
{
    CDonThuc temp = *this-a;
    if (temp.cach<50)
        return 1;
    else 
        return 0;
}

int CDonThuc::operator<=(CDonThuc a)
{
   CDonThuc temp = *this-a;
    if (temp.cach<=50)
        return 1;
    else 
        return 0;
}

int CDonThuc::operator>=(CDonThuc a)
{
    CDonThuc temp = *this-a;
    if (temp.cach>=50)
        return 1;
    else 
        return 0;
}

int CDonThuc::operator==(CDonThuc a)
{
    CDonThuc temp = *this-a;
    if (temp.cach == 50)
        return 1;
    else 
        return 0;
}

int CDonThuc::operator!=(CDonThuc a)
{
    CDonThuc temp = *this-a;
    if (temp.cach!=50)
        return 1;
    else 
        return 0;
}

int main()
{
    
    return 0;
}