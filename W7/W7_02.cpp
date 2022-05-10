#include <iostream>

using namespace std;

class CSoPhuc 
{
    private:
        int x;
        int y;
    public:
        CSoPhuc Tong(CSoPhuc);
        CSoPhuc operator+ (CSoPhuc);
        CSoPhuc operator- (CSoPhuc); 
        CSoPhuc operator* (CSoPhuc);
        CSoPhuc operator/ (CSoPhuc);
        CSoPhuc operator+= (CSoPhuc);
        CSoPhuc operator-= (CSoPhuc);
        CSoPhuc operator*= (CSoPhuc);
        CSoPhuc operator/= (CSoPhuc);
        CSoPhuc operator++ (CSoPhuc);
        CSoPhuc operator-- (CSoPhuc);
}; 


int main()
{
    
    return 0;
}