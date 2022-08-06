#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
    bool isBadVersion(int version);

public:
    int firstBadVersion(int n)
    {
        int st = 1, end = n, mid;
        while (st <= end)
        {
            mid = (end - st) / 2 + st;
            if (isBadVersion(mid) && (mid >= 1 && isBadVersion(mid - 1)))
            {
                return mid;
            }
            else if (isBadVersion(mid))
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        return mid;
    }
};

int main()
{

    return 0;
}