#include <iostream>
using namespace std;

int main()
{
    ;
    int amount;
    cout << "enter the amount" << endl;
    cin >> amount;
    int Rs100, Rs50, Rs20, Rs1;

    switch (1)
    {
    case 1:
        Rs100 = amount / 100;
        amount %= 100;
        cout << "No of 100 in given amount is " << Rs100 << endl;

    case 2:
        Rs50 = amount / 50;
        amount %= 50;
        cout << "No of 50 in given amount is " << Rs50 << endl;

    case 3:
        Rs20 = amount / 20;
        amount %= 20;
        cout << "No of 20 in given amount is " << Rs20 << endl;

    case 4:
        Rs1 = amount / 1;
        amount %= 1;
        cout << "No of 1 in given amount is " << Rs1 << endl;
    }

    return 0;
}