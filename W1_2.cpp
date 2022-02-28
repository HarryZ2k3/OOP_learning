#include <iostream>
#include <string>
using namespace std;
struct Hocsinh
{
    string hoten;
    int toan;
    int van;
    float dtb;
};
typedef struct Hocsinh HOCSINH;

bool isNumber(const HOCSINH& x)
{
    for(char const &ch : x.hoten)
    {
        if(std::isdigit(ch)==0)
        return false;
    }
    return true;
}

void getinfo(HOCSINH& x)
{
    getline(cin,x.hoten);
    cin >> x.toan;
    cin >> x.van;
}

void process(HOCSINH& x)
{
    x.dtb = (float)(x.toan + x.van)/2;
}

void print(HOCSINH x)
{
    cout << "GPA:" << x.dtb;
}
int main()
{
    HOCSINH hs;
    getinfo(hs);
    process(hs);
    isNumber(hs) ? cout <<"Nhap sai, nhap lai\n" : cout << "";
    print(hs);
    return 1;
}