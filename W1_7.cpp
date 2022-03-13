#include <iostream>
#include <math.h>

using namespace std;
struct Toado
{
    int xa,ya,xb,yb,xc,yc;
    float kc_ab,kc_ac,kc_bc,chuvi,dientich;
};
typedef struct Toado TOADO;

void input(TOADO& a)
{
    cin >> a.xa >> a.ya >> a.xb >> a.yb >>a.xc >>a.yc;
}

void process(TOADO& a)
{
    a.kc_ab = (float)sqrt((a.xa-a.xb)*(a.xa-a.xb)+(a.ya-a.yb)*(a.ya-a.yb));
    a.kc_ac = (float)sqrt((a.xa-a.xc)*(a.xa-a.xc)+(a.ya-a.yc)*(a.ya-a.yc));
    a.kc_bc = (float)sqrt((a.xb-a.xc)*(a.xb-a.xc)+(a.yb-a.yc)*(a.yb-a.yc));
    a.chuvi = (float)a.kc_ab + a.kc_ac + a.kc_bc;
    //heron
    float p = a.chuvi /2;
    a.dientich = (float)sqrt(p*(p-a.kc_bc)*(p-a.kc_ac)*(p-a.kc_ab));
}

void print(TOADO a)
{
    cout << "Chu vi" << a.chuvi << endl;
    cout << "Dien Tich" << a.dientich <<endl;
}
int main()
{
    TOADO td;
    input(td);
    process(td);
    print(td);

    return 0;
}