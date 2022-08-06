#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        int st = 1, end = 46340;
        while (st <= end)
        {
            int mid = st + (end - st) / 2;
            if ((mid * mid) == num)
            {
                return mid;
            }
            else if ((mid * mid) > num)
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        return 0;
    }
};

int main()
{

    return 0;
}