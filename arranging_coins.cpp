#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

class Solution
{
public:
    int arrangeCoins(int n)
    {
        long long sum = 0, cnt = 0;
        for (int i = 1; i < pow(2, 31); i++)
        {
            sum += i;
            cnt++;
            if (sum >= n)
            {
                return sum == n ? cnt : cnt - 1;
            }
        }
        return 0;
    }
};

int main()
{

    return 0;
}