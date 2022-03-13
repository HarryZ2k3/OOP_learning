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