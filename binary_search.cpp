#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int st = 0, end = nums.size() - 1;
        while (st <= end)
        {
            int mid = (st + end) / 2;
            if (target == nums[mid])
            {
                return mid;
            }
            else if (target < nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        return -1;
    }
};

int main()
{

    return 0;
}