#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int mySqrt(int x)
    {
        int l = 1;
        int h = x;
        int res = 0;
        while (l <= h)
        {
            int mid = l + (h - l) / 2;
            if (mid <= x / mid)
            {
                l = mid + 1;
                res = mid;
            }

            else
            {
                h = mid - 1;
            }
        }
        return res;
    }
};

int main()
{

    return 0;
}