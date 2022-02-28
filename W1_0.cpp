#include <iostream>

using namespace std;

struct Super_int
{
    int num, result;
};
typedef struct Super_int SUPER;

bool isPrime(int n)
{
    if (n<=1)
    {
    return false;
    }
    for (int j=2;j<n;j++)
    {
        if (n%j==0)
        {
            return false;
        }
    }
    return true;
}

void input(SUPER& a)
{
    cin >> a.num;
    if (a.num >=10 || a. num <0)
    {
        cout << "Nhap sai cu phap. vui long nhap lai";
    }
}

void process(SUPER& a)
{
    if (a.num != 1)
    {
        for (int i=0; i <= 10^a.num-1;i++)
        {
            if(isPrime(i))
            {
                a.result++;
            }
        }
    }
}

void print(SUPER a)
{
    cout << a.result;
}
int main()
{
    SUPER prime;
    input(prime);
    process(prime);
    print(prime);
    return 0;
}
