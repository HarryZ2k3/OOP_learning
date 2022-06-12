#include <iostream>

using namespace std;

class CNgay
{
    private:
        int ngay;
        int thang;
        int nam;
        int cach;
    public:
        friend istream& operator>>(istream &is,CNgay&x);
        friend ostream& operator<<(ostream &os,CNgay&x);
        CNgay operator-(CNgay);
        int operator>(CNgay);
        int operator<(CNgay);
        int operator>=(CNgay);
        int operator<=(CNgay);
        int operator==(CNgay);
        int operator!=(CNgay);
};
istream& operator>>(istream &is,CNgay &x)
{
    cout << "Nhap diem thang:" << endl;
    is >> x.thang;
    cout << "Nhap diem ngay" << endl;
    is >> x.ngay;
    cout << "Nhap diem nam" << endl;
    is >> x.nam;
    return is;
}

ostream& operator<<(ostream &os,CNgay &x)
{
    cout << "thang";
    os << x.thang;
    cout << endl << "ngay";
    os << x.ngay;
    cout << endl << "nam ";
    os << x.nam;
    return os;
}
CNgay CNgay::operator-(CNgay x)
{
    CNgay temp;
    temp.cach = (ngay-x.ngay);
    return temp;
}

int CNgay::operator>(CNgay x)
{
    CNgay temp = *this-x;
    if (temp.cach>50)
        return 1;
    else 
        return 0;
}

int CNgay::operator<(CNgay x)
{
    CNgay temp = *this-x;
    if (temp.cach<50)
        return 1;
    else 
        return 0;
}

int CNgay::operator<=(CNgay x)
{
   CNgay temp = *this-x;
    if (temp.cach<=50)
        return 1;
    else 
        return 0;
}

int CNgay::operator>=(CNgay x)
{
    CNgay temp = *this-x;
    if (temp.cach>=50)
        return 1;
    else 
        return 0;
}

int CNgay::operator==(CNgay x)
{
    CNgay temp = *this-x;
    if (temp.cach == 50)
        return 1;
    else 
        return 0;
}

int CNgay::operator!=(CNgay x)
{
    CNgay temp = *this-x;
    if (temp.cach!=50)
        return 1;
    else 
        return 0;
}

int main()
{
    
    return 0;
}