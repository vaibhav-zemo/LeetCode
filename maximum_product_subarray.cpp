#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        vector<int> vec(nums.size());
        vec[nums.size() - 1];

        for (int i = nums.size() - 2; i >= 0; i--)
        {
            vec[i] = max(nums[i], nums[i] * vec[i - 1]);
        }

        int ans = INT_MIN;
        for (int x : vec)
        {
            ans = max(ans, x);
        }
        return ans;
    }
};

int main()
{

    return 0;
}