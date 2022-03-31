#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int pivotIndex(vector<int> &nums)
{
    int sum = 0, ans = -1;
    for (int x : nums)
        sum += x;
    int left = 0, right = sum;
    for (int i = 0; i < nums.size(); i++)
    {
        right -= nums[i];
        if (left == right)
        {
            ans = i;
            break;
        }
        left += nums[i];
    }
    return ans;
}

int main()
{
    vector<int> v = {1,7,3,6,5,6};
    cout<<pivotIndex(v);
    return 0;
}