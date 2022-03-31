#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool isPalindrome(int x)
{
    if (x < 0)
    {
        return false;
    }

    int cp = x;
    long long int reverse = 0;
    while (x)
    {
        long long int rem = x % 10;
        reverse = reverse * 10 + rem;
        x /= 10;
    }

    return cp == reverse;
}

int main()
{
    int x;
    cin >> x;

    cout << isPalindrome(x);
    return 0;
}