#include <iostream>
#include <cmath>

using namespace std;

class ToaDo
{
    private:
        int x,y;
        float x_tt,y_tt;
        float kc_ab,kc_ac,kc_bc;
        float chuvi, dientich;
    public:
        void input();
        void kc_ab(ToaDo);
        void kc_ac(ToaDo);
        void kc_bc(ToaDo);
        void process();
        void print();
};

void ToaDo::input()
{
    cin >> x >> y;
}

void ToaDo::kc_ab(ToaDo t)
{   
    float kc_ab = sqrt(((x-t.x)*(x-t.x))+((y-t.y)*(y-t.y)));
}

void ToaDo::kc_ac(ToaDo t)
{   
    float kc_ac = sqrt(((x-t.x)*(x-t.x))+((y-t.y)*(y-t.y)));
}

void ToaDo::kc_bc(ToaDo t)
{   
    float kc_bc = sqrt(((x-t.x)*(x-t.x))+((y-t.y)*(y-t.y)));
}

void ToaDo::process
{
    float chuvi = kc_ab+kc_bc+kc_ac;
    float p= (kc_ab+kc_ac+kc_bc)/2;
    float dientich = sqrt(p*(p-kc_ab)*(p-kc_ac)*(p-kc_bc));
}

void ToaDo::print()
{

}

int main()
{
    ToaDo a,b,c;
    a.input();
    b.input();
    c.input();
    a.kc_ab(b);
    a.kc_ac(c);
    b.kc_bc(c);
    
    return 0;
}