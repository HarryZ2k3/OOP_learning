#include <iostream>
#include <math.h>

using namespace std;
struct Toado
{
    int x1,y1,x2,y2;
    float khoang_cach;
};
typedef struct Toado TOADO;

void input(TOADO& a)
{
    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
}

void process(TOADO& a)
{
    a.khoang_cach = (float)sqrt((a.x1-a.x2)*(a.x1-a.x2)+(a.y1-a.y2)*(a.y1-a.y2));
}

void print(TOADO a)
{
    cout << a.khoang_cach;
}
int main()
{
    TOADO td;
    input(td);
    process(td);
    print(td);

    return 0;
}