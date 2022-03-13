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
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
            if (a.ngay == 31)
            {
                a.ngay = 1;
                a.thang += 1;
            }
            else
            {
                a.ngay-=1;
            }
            break;
        case 12:
            if (a.ngay == 31)
            {
                a.ngay = 1;
                a.thang == 1;
                a.nam +=1;
            }
            else
            {
                a.ngay+=1;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (a.ngay == 30)
            {
                a.ngay = 1;
                a.thang += 1;
            }
            else
            {
                a.ngay+=1;
            }
            break;
        case 2:
                if (((a.nam % 4 == 0) && !(a.nam % 100 == 0))|| (a.nam % 400 == 0))
                {
                    if (a.ngay ==29)
                    {
                        a.ngay = 1;
                        a.thang +=1;
                    }
                    else 
                    {
                        if (a.ngay ==28)
                        {    
                            a.ngay = 1;
                            a.thang +=1;
                        }
                    }
                }  
            else
            {
                a.ngay+=1;
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
