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
    cout <<"Please enter a date:";
    cin >> ngay >> thang >> nam;
}

void date::checkDate()
{
    switch(thang) 
    {
        case 2:
        case 4:
        case 6:
        case 8:
        case 9:
        case 11:
            if (ngay == 1)
            {
                ngay = 31;
                thang -= 1;
            }
            else
            {
                ngay-=1;
            }
            break;
        case 1:
            if (ngay == 1)
            {
                ngay = 31;
                thang == 12;
                nam -=1;
            }
            else
            {
                ngay-=1;
            }
            break;
        case 5:
        case 7:
        case 10:
        case 12:
            if (ngay == 1)
            {
                ngay = 30;
                thang -= 1;
            }
            else
            {
                ngay-=1;
            }
            break;
        case 3:
            if (ngay==1)
            {
                if (((nam % 4 == 0) && !(nam % 100 == 0))|| (nam % 400 == 0))
                {
                        ngay = 29;
                        thang -=1;
                }
                else 
                {
                    ngay = 28;
                    thang -=1;
                }
            }
            else
            {
                ngay-=1;
            }
            break;
    }
}
void date::output()
{
    cout << ngay << '/' << thang << '/' << nam;
}

int main()
{
    date dd;
    dd.input();
    dd.checkDate();
    dd.output();
}

