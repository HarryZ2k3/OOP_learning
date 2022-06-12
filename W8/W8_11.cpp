#include <iostream>
#include <cmath>

using namespace std;

class CTamGiac
{
    private:
        int x1;
        int x2;
        int x3;
        int y1;
        int y2;
        int y3;
        float cv;
    public:
        friend istream& operator>>(istream &is,CTamGiac&a);
        friend ostream& operator<<(ostream &os,CTamGiac&a);
        CTamGiac operator-(CTamGiac);
        int operator>(CTamGiac);
        int operator<(CTamGiac);
        int operator>=(CTamGiac);
        int operator<=(CTamGiac);
        int operator==(CTamGiac);
        int operator!=(CTamGiac);
};
istream& operator>>(istream &is,CTamGiac &x)
{
    cout << "Nhap toa do diem thu nhat" << endl;
    is >> x.x1 >> x.y1;
    cout << "Nhap toa do diem thu hai" << endl;
    is >> x.x2 >> x.y2;
    cout << "Nhap toa do diem thu ba" << endl;
    is >> x.x3 >> x.y3;
    return is;
}

ostream& operator<<(ostream &os,CTamGiac &x)
{
    cout << "toa do diem thu nhat" << endl;
    os << x.x1 << x.y1;
    cout << "toa do diem thu hai" << endl;
    os << x.x2 << x.y2;
    cout << "toa do diem thu ba" << endl;
    os << x.x3 << x.y3;
    return os;
}
CTamGiac CTamGiac::operator-(CTamGiac x)
{
    CTamGiac temp;
    temp.cv = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2))+sqrt((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2))+sqrt((x1-x3)*(x1-x3) + (y1-y3)*(y1-y3));
    return temp;
}

int CTamGiac::operator>(CTamGiac x)
{
    CTamGiac temp = *this-x;
    if (temp.cv>50)
        return 1;
    else 
        return 0;
}

int CTamGiac::operator<(CTamGiac x)
{
    CTamGiac temp = *this-x;
    if (temp.cv<50)
        return 1;
    else 
        return 0;
}

int CTamGiac::operator<=(CTamGiac x)
{
   CTamGiac temp = *this-x;
    if (temp.cv<=50)
        return 1;
    else 
        return 0;
}

int CTamGiac::operator>=(CTamGiac x)
{
    CTamGiac temp = *this-x;
    if (temp.cv>=50)
        return 1;
    else 
        return 0;
}

int CTamGiac::operator==(CTamGiac x)
{
    CTamGiac temp = *this-x;
    if (temp.cv == 50)
        return 1;
    else 
        return 0;
}

int CTamGiac::operator!=(CTamGiac x)
{
    CTamGiac temp = *this-x;
    if (temp.cv!=50)
        return 1;
    else 
        return 0;
}

int main()
{
    
    return 0;
}