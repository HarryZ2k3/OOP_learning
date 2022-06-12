#include <iostream>

using namespace std;

class CThoiGian
{
    private:
        int giay;
        int phut;
        int gio;
        int cach;
    public:
        friend istream& operator>>(istream &is,CThoiGian&x);
        friend ostream& operator<<(ostream &os,CThoiGian&x);
        CThoiGian operator-(CThoiGian);
        int operator>(CThoiGian);
        int operator<(CThoiGian);
        int operator>=(CThoiGian);
        int operator<=(CThoiGian);
        int operator==(CThoiGian);
        int operator!=(CThoiGian);
};
istream& operator>>(istream &is,CThoiGian &x)
{
    cout << "Nhap diem phut:" << endl;
    is >> x.phut;
    cout << "Nhap diem giay" << endl;
    is >> x.giay;
    cout << "Nhap diem gio" << endl;
    is >> x.gio;
    return is;
}

ostream& operator<<(ostream &os,CThoiGian &x)
{
    cout << "phut";
    os << x.phut;
    cout << endl << "giay";
    os << x.giay;
    cout << endl << "gio ";
    os << x.gio;
    return os;
}
CThoiGian CThoiGian::operator-(CThoiGian x)
{
    CThoiGian temp;
    temp.cach = (giay-x.giay);
    return temp;
}

int CThoiGian::operator>(CThoiGian x)
{
    CThoiGian temp = *this-x;
    if (temp.cach>50)
        return 1;
    else 
        return 0;
}

int CThoiGian::operator<(CThoiGian x)
{
    CThoiGian temp = *this-x;
    if (temp.cach<50)
        return 1;
    else 
        return 0;
}

int CThoiGian::operator<=(CThoiGian x)
{
   CThoiGian temp = *this-x;
    if (temp.cach<=50)
        return 1;
    else 
        return 0;
}

int CThoiGian::operator>=(CThoiGian x)
{
    CThoiGian temp = *this-x;
    if (temp.cach>=50)
        return 1;
    else 
        return 0;
}

int CThoiGian::operator==(CThoiGian x)
{
    CThoiGian temp = *this-x;
    if (temp.cach == 50)
        return 1;
    else 
        return 0;
}

int CThoiGian::operator!=(CThoiGian x)
{
    CThoiGian temp = *this-x;
    if (temp.cach!=50)
        return 1;
    else 
        return 0;
}

int main()
{
    
    return 0;
}