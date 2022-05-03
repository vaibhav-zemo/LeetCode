#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int findUnsortedSubarray(vector<int> &nums)
    {
        vector<int> temp = nums;
        sort(nums.begin(), nums.end());
        int cnt = 0;
        bool flag = true;
        int st = 0, end = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != temp[i])
            {
                if (flag)
                {
                    st = i;
                    flag = false;
                }
                end = i;
            }
        }

        if (end == 0 && st == 0)
        {
            return 0;
        }
        return (end - st + 1);
    }
};

int main()
{

    return 0;
}