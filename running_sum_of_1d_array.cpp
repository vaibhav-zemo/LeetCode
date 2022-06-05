#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(n);
        int sum = 0, i = 0;
        for (int x : nums)
        {
            sum += x;
            ans[i] = sum;
            i++;
        }
        return ans;
    }
};

int main()
{

    return 0;
}