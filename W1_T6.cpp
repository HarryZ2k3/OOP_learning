#include <iostream>
using namespace std;

struct Ngay 
{
    int ngay,thang,nam;
};
typedef struct Ngay NGAY;
void input(NGAY& a)
{
    cin >> a.ngay >>a.thang>>a.nam;
}
void process(NGAY& a)
{
    switch(a.thang) 
    {
        case 2:
        case 4:
        case 6:
        case 8:
        case 9:
        case 11:
            if (a.ngay == 1)
            {
                a.ngay = 31;
                a.thang -= 1;
            }
            else
            {
                a.ngay-=1;
            }
            break;
        case 1:
            if (a.ngay == 1)
            {
                a.ngay = 31;
                a.thang == 12;
                a.nam -=1;
            }
            else
            {
                a.ngay-=1;
            }
            break;
        case 5:
        case 7:
        case 10:
        case 12:
            if (a.ngay == 1)
            {
                a.ngay = 30;
                a.thang -= 1;
            }
            else
            {
                a.ngay-=1;
            }
            break;
        case 3:
            if (a.ngay==1)
            {
                if (((a.nam % 4 == 0) && !(a.nam % 100 == 0))|| (a.nam % 400 == 0))
                {
                        a.ngay = 29;
                        a.thang -=1;
                }
                else 
                {
                    a.ngay = 28;
                    a.thang -=1;
                }
            }
            else
            {
                a.ngay-=1;
            }
            break;
    }
}
void print(NGAY a)
{
    cout <<a.ngay <<"/"<<a.thang<<"/"<<a.nam;
}
int main() 
{
    NGAY d;
    input(d);
    process(d);
    print (d);
    return 0;
}
