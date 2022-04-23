#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

vector<int> nextGreaterElements(vector<int> &nums)
{
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        int st = i + 1;
        if (st >= nums.size())
        {
            st = 0;
        }

        bool flag = true;
        while (st != i)
        {
            if (nums[i] < nums[st])
            {
                flag = false;
                ans.push_back(nums[st]);
                break;
            }
            st++;
            if (st >= nums.size())
            {
                st = 0;
            }
        }
        if (flag)
        {
            ans.push_back(-1);
        }
    }

    return ans;
}

int main()
{

    return 0;
}