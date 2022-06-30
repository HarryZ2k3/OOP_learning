#include <iostream>
#include <math.h>
using namespace std;

class CDiemKhongGian 
{
    private:
        float x;
        float y;
        float z;
    public: 
    //PT khoi tao
        void KhoiTao();
        void KhoiTao(float,float,float);
        void KhoiTao(const CDiemKhongGian&);
        CDiemKhongGian();
        CDiemKhongGian(float,float,float);
        CDiemKhongGian(const CDiemKhongGian&);
        void Nhap();
        friend istream&operator>>(istream&,CDiemKhongGian&); 
    //PT cung cap thong tin
        void Xuat();
        friend ostream&operator<<(ostream&,CDiemKhongGian&);
        float getX();
        float getY();
        float getZ();
    //PT Cap nhap thong tin
        CDiemKhongGian& operator = (const CDiemKhongGian&);
        void setX(float);
        void setY(float);
        void setZ(float);
    //PT kiem tra
        int isTrungGoc();
        int isTrung(const CDiemKhongGian&);
        int isKhongTrung(const CDiemKhongGian&);
        int ktThuocHoanh();
        int ktThuocTung();
        int ktThuocZ();
        int ktThuoc1();
        int ktThuoc2();
        int ktThuoc3();
        int ktThuoc4();

        int operator == (const CDiemKhongGian&);
        int operator != (const CDiemKhongGian&);
        int operator > (const CDiemKhongGian&);
        int operator < (const CDiemKhongGian&);
        int operator >= (const CDiemKhongGian&);
        int operator <= (const CDiemKhongGian&);
    
    //PT xu ly
        float KhoangCachGoc();
        float KhoangCach(const CDiemKhongGian&);
        float KhoangCachX(const CDiemKhongGian&);
        float KhoangCachY(const CDiemKhongGian&);
        float KhoangCachZ(const CDiemKhongGian&);

        CDiemKhongGian DoiXungGoc();
        CDiemKhongGian DoiXungHoanh();
        CDiemKhongGian DoiXungTung();
        CDiemKhongGian DoiXungZ();
        CDiemKhongGian DoiXungPhanGiac1();
        CDiemKhongGian DoiXungPhanGiac2();
        ~CDiemKhongGian();//destructor
};

void CDiemKhongGian::KhoiTao()
{
    x=0;
    y=0;
    z=0;
}

void CDiemKhongGian::KhoiTao(float xx,float yy,float zz)
{
    x=xx;
    y=yy;
    z=zz;
}

void CDiemKhongGian::KhoiTao(const CDiemKhongGian& P)
{
    x=P.x;
    y=P.y;
    z=P.z;
}

CDiemKhongGian::CDiemKhongGian()
{
    x=0;
    y=0;
    z=0;
}

CDiemKhongGian::CDiemKhongGian(float xx,float yy,float zz)
{
    x=xx;
    y=yy;
    z=zz;
}

CDiemKhongGian::CDiemKhongGian(const CDiemKhongGian&P)
{
    x=P.x;
    y=P.y;
    z=P.z;
}

void CDiemKhongGian::Nhap()
{
    cout<<"Nhap x: ";
    cin >> x;
    cout <<"Nhap y: ";
    cin >> y;
    cout <<"Nhap z: ";
    cin >>z;
}

istream& operator >> (istream& is,CDiemKhongGian& P)
{
    cout << "Nhap x: ";
    is >> P.x;
    cout << "Nhap y: ";
    is >> P.y;
    cout << "Nhap Z: ";
    is >> P.z;
    return is;
}

void CDiemKhongGian::Xuat()
{
    cout << "(" <<x << ","<<y << ","<<z <<")";
}

ostream& operator << (ostream& os,CDiemKhongGian& P)
{
    os << "(" <<P.x << ","<<P.y << ","<<P.z <<")";
    return os;
}

float CDiemKhongGian::getX()
{
    return x;
}
float CDiemKhongGian::getY()
{
    return y;
}

float CDiemKhongGian::getZ()
{
    return z;
}

CDiemKhongGian& CDiemKhongGian::operator = (const CDiemKhongGian& P)
{
    x=P.x;
    y=P.y;
    z=P.z;
    return *this;
}

void CDiemKhongGian::setX(float xx)
{
    x=xx;
}

void CDiemKhongGian::setY(float yy)
{
    y=yy;
}

void CDiemKhongGian::setZ(float zz)
{
    z=zz;
}

int CDiemKhongGian::isTrungGoc()
{
    if(x==0 && y==0 && z==0)
        return 1;
    return 0;
}

int CDiemKhongGian::isTrung(const CDiemKhongGian& P)
{
    if(x==P.x && y==P.y && z==P.z)
        return 1;
    return 0;
}

int CDiemKhongGian::isKhongTrung(const CDiemKhongGian& P)
{
    if(!(x==P.x && y==P.y && z=P.z))
        return 1;
    return 0;
}

int CDiemKhongGian::ktThuocHoanh()
{
    if (y==0)
        return 1;
    return 0;
}

int CDiemKhongGian::ktThuocHoanh()
{
    if (x==0)
        return 1;
    return 0;
}

int CDiemKhongGian::ktThuocZ()
{
    if (z==0)
        return 1;
    return 0;
}
int CDiemKhongGian::ktThuoc1()
{
    if(x>0 &&y>0 && z>0)
        return 1;
    return 0;
}

int CDiemKhongGian::ktThuoc2()
{
    if(x<0 &&y<0 && z<0)
        return 1;
    return 0;
}

int CDiemKhongGian::ktThuoc2()
{
    if(x>0 &&y<0 && z<0)
        return 1;
    return 0;
}

int CDiemKhongGian::ktThuoc3()
{
    if(x<0 &&y>0 && z<0)
        return 1;
    return 0;
}

int CDiemKhongGian::ktThuoc4()
{
    if(x<0 &&y<0 && z >0)
        return 1;
    return 0;
}

float CDiemKhongGian::KhoangCachGoc()
{
    return sqrt(x*x+y*y+z*z);
}

float CDiemKhongGian::KhoangCach(const CDiemKhongGian& P)
{
    return sqrt((x-P.x)*(x-P.x)+(y-P.y)*(y-P.y)+(z-P.z)*(z-P.z));
}

float CDiemKhongGian::KhoangCachX(const CDiemKhongGian& P)
{
    return abs(x-P.x);
}

float CDiemKhongGian::KhoangCachY(const CDiemKhongGian& P)
{
    return abs(y-P.y);
}

float CDiemKhongGian::KhoangCachY(const CDiemKhongGian& P)
{
    return abs(z-P.z);
}

CDiemKhongGian CDiemKhongGian::DoiXungGoc()
{
    CDiemKhongGian temp;
    temp.x=-x;
    temp.y=-y;
    temp.z=-z;
    return temp;
}
CDiemKhongGian CDiemKhongGian::DoiXungHoanh()
{
    CDiemKhongGian temp;
    temp.x=x;
    temp.y=-y;
    temp.z=z;
    return temp;
}
CDiemKhongGian CDiemKhongGian::DoiXungTung()
{
    CDiemKhongGian temp;
    temp.x=-x;
    temp.y=y;
    temp.z=z;
    return temp;
}

CDiemKhongGian CDiemKhongGian::DoiXungZ()
{
    CDiemKhongGian temp;
    temp.x=-x;
    temp.y=-y;
    temp.z=z;
    return temp;
}
CDiemKhongGian CDiemKhongGian::DoiXungPhanGiac1()
{
    CDiemKhongGian temp;
    temp.x=y;
    temp.y=x;
    temp.z=z;
    return temp;
}
CDiemKhongGian CDiemKhongGian::DoiXungPhanGiac2()
{
    CDiemKhongGian temp;
    temp.x=-y;
    temp.y=-x;
    temp.z=z;
    return temp;
}

CDiemKhongGian::~CDiemKhongGian()
{
    return;
}