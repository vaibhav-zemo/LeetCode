#include <iostream>

using namespace std;
int countzero(int n)
{
    // int fact = 1;
    // for (int i = 2; i <= n; i++)

    //     fact = fact * i;
    // int result = 0;
    // while (fact % 10 == 0)
    // {
    //     result++;
    //     fact = fact / 10;
    // }
    // return result;

    // second approach

    int result = 0;
    for (int i = 5; i <= n; i = i * 5)

        result = result + n / i;

    return result;
}
int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    cout << countzero(n) << endl;

    return 0;
}