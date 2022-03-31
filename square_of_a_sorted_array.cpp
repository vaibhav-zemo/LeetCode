#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sortedSquares(vector<int> &nums)
{
    vector<int> ans(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        ans[i] = pow(nums[i], 2);
    }
    sort(ans.begin(),ans.end());
    return ans;
}

int main()
{

    return 0;
}