#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = nums[0];
        int max_sum = nums[0];

        for(int i=1;i<nums.size();i++)
        {
            if (sum < 0)
            {
                sum = 0;
            }
            sum += nums[i];
            max_sum = max(max_sum,sum);
        }
        return max_sum;
    }
};

int main()
{

    return 0;
}