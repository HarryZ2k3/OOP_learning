#include <iostream>
#include <cstring>
using namespace std;

string hoten;
int toan;
int van;
float dtb;
bool isNumber(const string& hoten)
{
    for(char const &ch : hoten){
        if (std::isdigit(ch)==0)
        return false;
    }
    return true;
}

void getinfo(string& hoten,int& toan,int& van)
{
    getline(cin,hoten);
    cin >> toan;
    cin >> van;
}

void process(int toan,int van,float& dtb)
{
    dtb = (float)(toan + van)/2;
}

void print(string hoten,float dtb)
{
    cout << dtb;
}
int main()
{
    string ht;
    int t,v;
    float tb;
    getinfo(ht,t,v);
    process(t,v,tb);
    isNumber(ht) ? cout <<"Nhap sai, nhap lai\n" : cout<<"";
    print(ht,tb);
    return 1;
}