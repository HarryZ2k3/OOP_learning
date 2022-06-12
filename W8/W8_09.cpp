#include <iostream>

using namespace std;

class CDuongTron
{
    private:
        int a;
        int b;
        int R;
        int cach;
    public:
        friend istream& operator>>(istream &is,CDuongTron&a);
        friend ostream& operator<<(ostream &os,CDuongTron&a);
        CDuongTron operator-(CDuongTron);
        int operator>(CDuongTron);
        int operator<(CDuongTron);
        int operator>=(CDuongTron);
        int operator<=(CDuongTron);
        int operator==(CDuongTron);
        int operator!=(CDuongTron);
};
istream& operator>>(istream &is,CDuongTron &a)
{
    cout << "Nhap diem b:" << endl;
    is >> a.b;
    cout << "Nhap diem a" << endl;
    is >> a.a;
    cout << "Nhap diem R" << endl;
    is >> a.R;
    return is;
}

ostream& operator<<(ostream &os,CDuongTron &x)
{
    cout << "b";
    os << x.b;
    cout << endl << "a";
    os << x.a;
    cout << endl << "R ";
    os << x.R;
    return os;
}
CDuongTron CDuongTron::operator-(CDuongTron x)
{
    CDuongTron temp;
    temp.cach = (a-x.a);
    return temp;
}

int CDuongTron::operator>(CDuongTron x)
{
    CDuongTron temp = *this-x;
    if (temp.cach>50)
        return 1;
    else 
        return 0;
}

int CDuongTron::operator<(CDuongTron x)
{
    CDuongTron temp = *this-x;
    if (temp.cach<50)
        return 1;
    else 
        return 0;
}

int CDuongTron::operator<=(CDuongTron x)
{
   CDuongTron temp = *this-x;
    if (temp.cach<=50)
        return 1;
    else 
        return 0;
}

int CDuongTron::operator>=(CDuongTron x)
{
    CDuongTron temp = *this-x;
    if (temp.cach>=50)
        return 1;
    else 
        return 0;
}

int CDuongTron::operator==(CDuongTron x)
{
    CDuongTron temp = *this-x;
    if (temp.cach == 50)
        return 1;
    else 
        return 0;
}

int CDuongTron::operator!=(CDuongTron x)
{
    CDuongTron temp = *this-x;
    if (temp.cach!=50)
        return 1;
    else 
        return 0;
}

int main()
{
    
    return 0;
}