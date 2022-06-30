#include <iostream>
#include <math.h>
using namespace std;

class CDiem 
{
    private:
        float x;
        float y;
    public: 
    //PT khoi tao
        void KhoiTao();
        void KhoiTao(float,float);
        void KhoiTao(const CDiem&);
        CDiem();
        CDiem(float,float);
        CDiem(const CDiem&);
        void Nhap();
        friend istream&operator>>(istream&,CDiem&); 
    //PT cung cap thong tin
        void Xuat();
        friend ostream&operator<<(ostream&,CDiem&);
        float getX();
        float getY();
    //PT Cap nhap thong tin
        CDiem& operator = (const CDiem&);
        void setX(float);
        void setY(float);
    //PT kiem tra
        int isTrungGoc();
        int isTrung(const CDiem&);
        int isKhongTrung(const CDiem&);
        int ktThuocHoanh();
        int ktThuocTung();
        int ktThuoc1();
        int ktThuoc2();
        int ktThuoc3();
        int ktThuoc4();

        int operator == (const CDiem&);
        int operator != (const CDiem&);
        int operator > (const CDiem&);
        int operator < (const CDiem&);
        int operator >= (const CDiem&);
        int operator <= (const CDiem&);
    
    //PT xu ly
        float KhoangCachGoc();
        float KhoangCach(const CDiem&);
        float KhoangCachX(const CDiem&);
        float KhoangCachY(const CDiem&);

        CDiem DoiXungGoc();
        CDiem DoiXungHoanh();
        CDiem DoiXungTung();
        CDiem DoiXungPhanGiac1();
        CDiem DoiXungPhanGiac2();
        ~CDiem();//destructor
};

void CDiem::KhoiTao()
{
    x=0;
    y=0;
}

void CDiem::KhoiTao(float xx,float yy)
{
    x=xx;
    y=yy;
}

void CDiem::KhoiTao(const CDiem& P)
{
    x=P.x;
    y=P.y;
}

CDiem::CDiem()
{
    x=0;
    y=0;
}

CDiem::CDiem(float xx,float yy)
{
    x=xx;
    y=yy;
}

CDiem::CDiem(const CDiem&P)
{
    x=P.x;
    y=P.y;
}

void CDiem::Nhap()
{
    cout<<"Nhap x: ";
    cin >> x;
    cout <<"Nhap y: ";
    cin >> y;
}

istream& operator >> (istream& is,CDiem& P)
{
    cout << "Nhap x: ";
    is >> P.x;
    cout << "Nhap y: ";
    is >> P.y;
    return is;
}

void CDiem::Xuat()
{
    cout << "(" <<x << ","<<y <<")";
}

ostream& operator << (ostream& os,CDiem& P)
{
    os << "(" <<P.x << ","<< P.y <<")";
    return os;
}

float CDiem::getX()
{
    return x;
}
float CDiem::getY()
{
    return y;
}

CDiem& CDiem::operator = (const CDiem& P)
{
    x=P.x;
    y=P.y;
    return *this;
}

void CDiem::setX(float xx)
{
    x=xx;
}

void CDiem::setY(float yy)
{
    y=yy;
}

int CDiem::isTrungGoc()
{
    if(x==0 && y==0)
        return 1;
    return 0;
}

int CDiem::isTrung(const CDiem& P)
{
    if(x==P.x && y==P.y)
        return 1;
    return 0;
}

int CDiem::isKhongTrung(const CDiem& P)
{
    if(!(x==P.x && y==P.y))
        return 1;
    return 0;
}

int CDiem::ktThuocHoanh()
{
    if (y==0)
        return 1;
    return 0;
}

int CDiem::ktThuocHoanh()
{
    if (x==0)
        return 1;
    return 0;
}

int CDiem::ktThuoc1()
{
    if(x>0 &&y>0)
        return 1;
    return 0;
}

int CDiem::ktThuoc2()
{
    if(x<0 &&y>0)
        return 1;
    return 0;
}

int CDiem::ktThuoc2()
{
    if(x>0 &&y>0)
        return 1;
    return 0;
}

int CDiem::ktThuoc3()
{
    if(x<0 &&y<0)
        return 1;
    return 0;
}

int CDiem::ktThuoc4()
{
    if(x>0 &&y<0)
        return 1;
    return 0;
}

float CDiem::KhoangCachGoc()
{
    return sqrt(x*x+y*y);
}

float CDiem::KhoangCach(const CDiem& P)
{
    return sqrt((x-P.x)*(x-P.x)+(y-P.y)*(y-P.y));
}

float CDiem::KhoangCachX(const CDiem& P)
{
    return abs(x-P.x);
}

float CDiem::KhoangCachY(const CDiem& P)
{
    return abs(y-P.y);
}

CDiem CDiem::DoiXungGoc()
{
    CDiem temp;
    temp.x=-x;
    temp.y=-y;
    return temp;
}
CDiem CDiem::DoiXungHoanh()
{
    CDiem temp;
    temp.x=x;
    temp.y=-y;
    return temp;
}
CDiem CDiem::DoiXungTung()
{
    CDiem temp;
    temp.x=-x;
    temp.y=y;
    return temp;
}

CDiem CDiem::DoiXungPhanGiac1()
{
    CDiem temp;
    temp.x=y;
    temp.y=x;
    return temp;
}
CDiem CDiem::DoiXungPhanGiac2()
{
    CDiem temp;
    temp.x=-y;
    temp.y=-x;
    return temp;
}

CDiem::~CDiem()
{
    return;
}