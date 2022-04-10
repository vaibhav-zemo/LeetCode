#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double myPow(double x, int n)
{
    if (n == 0)
    {
        return x;
    }

    double ans = pow(x, n / 2);
    if (n % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        if (n < 0)
        {
            return ans * ans / x;
        }
        else
        {
            return ans * ans * x;
        }
    }
    return ans;
}

int main()
{
    cout << myPow(2.00, -2);
    return 0;
}