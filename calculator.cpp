#include <iostream>
using namespace std;


    int main(){

    int a, b;

    cout << "Input value of a " << endl;
    cin >> a;

    cout << "Input value of b " << endl;
    cin >> b;

    char op;
    cin>>op;

    switch (op) {
    case '+':
        cout << (a + b) << endl;
        break;
    case '-':
        cout << (a - b) << endl;
        break;
    case '*':
        cout << (a + b) << endl;
        break;
    case '/':
        cout << (a + b) << endl;
        break;
    case '%':
        cout << (a % b) << endl;
        break;
    default:
        cout << "Please enter the valid operation" << endl;
    }

    return 0;
} 