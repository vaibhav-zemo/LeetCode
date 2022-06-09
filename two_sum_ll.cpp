#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        vector<int> ans(2);
        for (int i = 0; i < numbers.size(); i++)
        {
            int left = target - numbers[i];
            auto it = lower_bound(numbers.begin() + i + 1, numbers.end(), left);
            if (it != numbers.end() && numbers[it - numbers.begin()] == left)
            {
                ans[0] = i + 1, ans[1] = it - numbers.begin() + 1;
                return ans;
            }
        }
        return ans;
    }
};

int main()
{

    return 0;
}