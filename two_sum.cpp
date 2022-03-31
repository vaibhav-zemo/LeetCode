#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ans;
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            int left = target - nums[i];
            if (m.count(left) && m[left] != i)
            {
                ans.push_back(i);
                ans.push_back(m[left]);
                break;
            }
        }
        return ans;
    }
};

int main()
{

    return 0;
}