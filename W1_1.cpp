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

/*void SieveOfEratosthenes(int n)
{
    int prime[n + 1];
    memset(prime, 0, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == 0)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = 1;
        }
    }
 
    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p] == 0)
            cout << p << " ";
}
 
// Driver Code
int main()
{
    int n;
    cout << "Please enter number n: ";
    cin >> n;

    cout << "\nAll the prime number(s) from two to " << n << ":" << endl;
    SieveOfEratosthenes(n);
    return 0;
}*/