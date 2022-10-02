#include <iostream>

using namespace std;

// Naive solution
// void PrintDivisor(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//             cout << i << endl;
//     }
// }

// Efficient solution

// void PrintDivisor(int n){
//     for (int i = 1; i*i <=n ; i++)
//     {
//         if (n%i==0)
//         {
//             cout<<i<<endl;
//         }
//         if (i!=n/i)
//         cout<<n/i<<endl;
//     }

// }

// More efficient solution

void PrintDivisor(int n)
{
    int i;
    for (i = 1; i * i < n; i++)
    {
        if (n % i == 0)
            cout << i << endl;
    }
    i--;
    for (; i >= 1; i--)
    {
        if (n % i == 0)
            cout << n / i << endl;
    }
}

int main()
{
    int n;
    cout << "enter the number" << endl;
    cin >> n;
    PrintDivisor(n);

    return 0;
}