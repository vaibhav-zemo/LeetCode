#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int divide(int dividend, int divisor)
{
    int ans = 0;

    if ((dividend > 0 && divisor > 0) || (dividend < 0 && divisor < 0))
    {
        dividend = dividend > 0 ? dividend : -dividend;
        divisor = divisor > 0 ? divisor : -divisor;
        while (dividend > 0)
        {
            dividend -= divisor;
            ans++;
            if (ans > 2e31 - 1)
            {
                return 2e31 - 1;
            }
        }
    }
    else
    {
        dividend = dividend > 0 ? dividend : -dividend;
        divisor = divisor > 0 ? divisor : -divisor;
        while (dividend > 0)
        {
            dividend -= divisor;
            ans++;
            if (ans > 2e31)
            {
                return -2e31;
            }
        }
    }

    return ans;
}

int main()
{

    return 0;
}