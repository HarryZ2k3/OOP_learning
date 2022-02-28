#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double cof = 0;
    double dou = 0;

    cout << "Hello. Welcome to Jim Hortons." << endl;

    cout << "Please enter the number of coffees you have bought today!" << endl;
    cin >> cof;

    cout << "Please enter the number of donuts you have bought today!" << endl;
    cin >> dou;

    double cof_price = cof * 1.99;
    double dou_price = dou * 4.99;
    
    double sub_tot = cof_price + dou_price;
    double hst = sub_tot * 0.13;
    double total_hst = sub_tot + hst;
    
    cout << setw(5) << left << "Jim Hortons" << endl;
    cout << setw(5) << left << "Customer Receipt" << endl;
    
    cout << setfill('-');
    cout << setw(55) << "-" << endl;
    cout << setfill(' ');

    cout << setw(5) << left << "Coffee";
    cout << setw(30) << left << cof;
    cout << setw(20) << right << cof_price << endl;
    
    cout << setw(5) << left << "Doughnut";
    cout << setw(30) << left << "x" << dou;
    cout << setw(20) << right << "$" << dou_price << endl;

    cout << setprecision(5) << left << setprecision(2) << fixed << "Total:  " << total_hst << endl ;
    return (0);
}
