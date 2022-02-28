#include <iostream>
#include <cmath>

using namespace std;

class Toado
{
    private:
        float x;
        float y;
    public:
        void input();
        float distance(Toado);
};  

void Toado::input()
{
    cin >> x;
    cin >> y;
}

float Toado::distance(Toado T)
{
    return sqrt((x-T.x)*(x-T.x)+(y-T.y)*(y-T.y));
}

int main()
{
    Toado A,B;
    A.input();
    B.input();
    float kq = B.distance(A);
    cout << kq;
    return 1;
}