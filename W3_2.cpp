#include <iostream>

using namespace std;

class date
{
    private:
        int ngay;
        int thang;
        int nam;
    public:
        void input();
        void checkDate();
        void output();
};

void date::input()
{
    cout << "Enter date: ";
    cin >> ngay >> thang >> nam;
} 

void date::checkDate()
{
    switch(thang) 
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
            if (ngay == 31)
            {
                ngay = 1;
                thang += 1;
            }
            else
            {
                ngay-=1;
            }
            break;
        case 12:
            if (ngay == 31)
            {
                ngay = 1;
                thang == 1;
                nam +=1;
            }
            else
            {
                ngay+=1;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (ngay == 30)
            {
                ngay = 1;
                thang += 1;
            }
            else
            {
                ngay+=1;
            }
            break;
        case 2:
                if (((nam % 4 == 0) && !(nam % 100 == 0))|| (nam % 400 == 0))
                {
                    if (ngay ==29)
                    {
                        ngay = 1;
                        thang +=1;
                    }
                    else 
                    {
                        if (ngay ==28)
                        {    
                            ngay = 1;
                            thang +=1;
                        }
                    }
                }  
            else
            {
                ngay+=1;
            }
        break;
    }
}

void date::output()
{
    cout << ngay <<"/" << thang << "/" <<nam; 
}
int main()
{
    date dd;
    dd.input();
    dd.checkDate();
    dd.output();
}