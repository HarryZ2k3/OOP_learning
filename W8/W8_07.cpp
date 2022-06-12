#include <iostream>

using namespace std;

class CDiemKhongGian
{
    private:
        int x;
        int y;
        int z;
        int cach;
    public:
        friend istream& operator>>(istream &is,CDiemKhongGian&a);
        friend ostream& operator<<(ostream &os,CDiemKhongGian&a);
        CDiemKhongGian operator-(CDiemKhongGian);
        int operator>(CDiemKhongGian);
        int operator<(CDiemKhongGian);
        int operator>=(CDiemKhongGian);
        int operator<=(CDiemKhongGian);
        int operator==(CDiemKhongGian);
        int operator!=(CDiemKhongGian);
};
istream& operator>>(istream &is,CDiemKhongGian &a)
{
    cout << "Nhap diem y:" << endl;
    is >> a.y;
    cout << "Nhap diem x" << endl;
    is >> a.x;
    cout << "Nhap diem z" << endl;
    is >> a.z;
    return is;
}

ostream& operator<<(ostream &os,CDiemKhongGian &a)
{
    cout << "y";
    os << a.y;
    cout << endl << "x";
    os << a.x;
    cout << endl << "z ";
    os << a.z;
    return os;
}
CDiemKhongGian CDiemKhongGian::operator-(CDiemKhongGian a)
{
    CDiemKhongGian temp;
    temp.cach = (x-a.x);
    return temp;
}

int CDiemKhongGian::operator>(CDiemKhongGian a)
{
    CDiemKhongGian temp = *this-a;
    if (temp.cach>50)
        return 1;
    else 
        return 0;
}

int CDiemKhongGian::operator<(CDiemKhongGian a)
{
    CDiemKhongGian temp = *this-a;
    if (temp.cach<50)
        return 1;
    else 
        return 0;
}

int CDiemKhongGian::operator<=(CDiemKhongGian a)
{
   CDiemKhongGian temp = *this-a;
    if (temp.cach<=50)
        return 1;
    else 
        return 0;
}

int CDiemKhongGian::operator>=(CDiemKhongGian a)
{
    CDiemKhongGian temp = *this-a;
    if (temp.cach>=50)
        return 1;
    else 
        return 0;
}

int CDiemKhongGian::operator==(CDiemKhongGian a)
{
    CDiemKhongGian temp = *this-a;
    if (temp.cach == 50)
        return 1;
    else 
        return 0;
}

int CDiemKhongGian::operator!=(CDiemKhongGian a)
{
    CDiemKhongGian temp = *this-a;
    if (temp.cach!=50)
        return 1;
    else 
        return 0;
}

int main()
{
    
    return 0;
}