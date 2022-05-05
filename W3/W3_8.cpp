#include <iostream>
#include <math.h>

using namespace std;

class Toado
{
    private:
        int x,y,r;
        float chuvi,dientich;
    public:
        void input();
        void process();
        void output(); 
};
void Toado::input()
{
    cout<<"Nhap x,y tam va ban kinh cua duong tron: ";
    cin >> x >>y>>r;
}

void Toado::process()
{
    chuvi=(float)(2*3.14*r);
    dientich=(float)(r*r*3.14);
}

void Toado::output()
{
    cout <<"Chu vi: "<<chuvi<<endl;
    cout <<"Dien Tich: "<<dientich<<endl;
}
int main()
{
    Toado td;
    td.input();
    td.process();
    td.output();
    return 0;
}