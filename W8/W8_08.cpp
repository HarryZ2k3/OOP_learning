#include <iostream>

using namespace std;

class CDuongThang
{
    private:
        int x;
        int y;
        int z;
        int cach;
    public:
        friend istream& operator>>(istream &is,CDuongThang&a);
        friend ostream& operator<<(ostream &os,CDuongThang&a);
        CDuongThang operator-(CDuongThang);
        int operator>(CDuongThang);
        int operator<(CDuongThang);
        int operator>=(CDuongThang);
        int operator<=(CDuongThang);
        int operator==(CDuongThang);
        int operator!=(CDuongThang);
};
istream& operator>>(istream &is,CDuongThang &a)
{
    cout << "Nhap diem y:" << endl;
    is >> a.y;
    cout << "Nhap diem x" << endl;
    is >> a.x;
    cout << "Nhap diem z" << endl;
    is >> a.z;
    return is;
}

ostream& operator<<(ostream &os,CDuongThang &a)
{
    cout << "y";
    os << a.y;
    cout << endl << "x";
    os << a.x;
    cout << endl << "z ";
    os << a.z;
    return os;
}
CDuongThang CDuongThang::operator-(CDuongThang a)
{
    CDuongThang temp;
    temp.cach = (x-a.x);
    return temp;
}

int CDuongThang::operator>(CDuongThang a)
{
    CDuongThang temp = *this-a;
    if (temp.cach>50)
        return 1;
    else 
        return 0;
}

int CDuongThang::operator<(CDuongThang a)
{
    CDuongThang temp = *this-a;
    if (temp.cach<50)
        return 1;
    else 
        return 0;
}

int CDuongThang::operator<=(CDuongThang a)
{
   CDuongThang temp = *this-a;
    if (temp.cach<=50)
        return 1;
    else 
        return 0;
}

int CDuongThang::operator>=(CDuongThang a)
{
    CDuongThang temp = *this-a;
    if (temp.cach>=50)
        return 1;
    else 
        return 0;
}

int CDuongThang::operator==(CDuongThang a)
{
    CDuongThang temp = *this-a;
    if (temp.cach == 50)
        return 1;
    else 
        return 0;
}

int CDuongThang::operator!=(CDuongThang a)
{
    CDuongThang temp = *this-a;
    if (temp.cach!=50)
        return 1;
    else 
        return 0;
}

int main()
{
    
    return 0;
}