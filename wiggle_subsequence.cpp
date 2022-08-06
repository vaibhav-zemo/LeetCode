#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int wiggleMaxLength(vector<int> &nums)
    {
        if (nums.size() < 2)
        {
            return nums.size();
        }

        bool flag = -1;
        int ans = 1;

        for (int i = 1; i < nums.size(); i++)
        {
            if (flag == -1)
            {
                if (nums[i] > nums[i - 1])
                {
                    flag = true;
                    ans++;
                }
                else if (nums[i] < nums[i - 1])
                {
                    flag = false;
                    ans++;
                }
            }
            else if (flag && (nums[i] < nums[i - 1]))
            {
                ans++;
                flag = false;
            }
            else if (!flag && (nums[i] > nums[i - 1]))
            {
                ans++;
                flag = true;
            }
        }

        return ans;
    }
};

int main()
{

    return 0;
}