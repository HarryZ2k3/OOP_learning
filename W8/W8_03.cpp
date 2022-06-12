#include <iostream>

using namespace std;

class CDiem
{
    private:
        float toan;
        float van;
        float anh;
        float dtb;
    public:
        friend istream& operator>>(istream &is,CDiem&x);
        friend ostream& operator<<(ostream &os,CDiem&x);
        CDiem operator-(CDiem);
        int operator>(CDiem);
        int operator<(CDiem);
        int operator>=(CDiem);
        int operator<=(CDiem);
        int operator==(CDiem);
        int operator!=(CDiem);
};
istream& operator>>(istream &is,CDiem &x)
{
    cout << "Nhap diem van:" << endl;
    is >> x.van;
    cout << "Nhap diem toan" << endl;
    is >> x.toan;
    cout << "Nhap diem anh" << endl;
    is >> x.anh;
    return is;
}

ostream& operator<<(ostream &os,CDiem &x)
{
    cout << "Van";
    os << x.van;
    cout << endl << "Toan";
    os << x.toan;
    cout << endl << "anh ";
    os << x.anh;
    return os;
}
CDiem CDiem::operator-(CDiem x)
{
    CDiem temp;
    temp.dtb = (x.toan+x.van+x.anh)/3;
    return temp;
}

int CDiem::operator>(CDiem x)
{
    CDiem temp = *this-x;
    if (temp.dtb>50)
        return 1;
    else 
        return 0;
}

int CDiem::operator<(CDiem x)
{
    CDiem temp = *this-x;
    if (temp.dtb<50)
        return 1;
    else 
        return 0;
}

int CDiem::operator<=(CDiem x)
{
   CDiem temp = *this-x;
    if (temp.dtb<=50)
        return 1;
    else 
        return 0;
}

int CDiem::operator>=(CDiem x)
{
    CDiem temp = *this-x;
    if (temp.dtb>=50)
        return 1;
    else 
        return 0;
}

int CDiem::operator==(CDiem x)
{
    CDiem temp = *this-x;
    if (temp.dtb == 50)
        return 1;
    else 
        return 0;
}

int CDiem::operator!=(CDiem x)
{
    CDiem temp = *this-x;
    if (temp.dtb!=50)
        return 1;
    else 
        return 0;
}

int main()
{
    
    return 0;
}