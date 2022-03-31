#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int helper(int i, int j, vector<int> arr)
{
    if (i == j)
    {
        return arr[i];
    }

    int mid = (i + j) / 2;
    int left_sum = INT_MIN, right_sum = INT_MIN;
    int sum = 0;
    for (int k = i; k <= mid; k++)
    {
        sum += arr[k];
        left_sum = max(left_sum, sum);
    }

    sum = 0;
    for (int k = mid + 1; k <= j; k++)
    {
        sum += arr[k];
        right_sum = max(right_sum, sum);
    }

    int cross_sum = left_sum + right_sum;
    left_sum = helper(i, mid, arr);
    right_sum = helper(mid + 1, j, arr);

    return max(cross_sum, max(left_sum, right_sum));
}

int maxSubArray(vector<int> &nums)
{
    return helper(0, nums.size()-1, nums);
}

int main()
{
    vector<int> v = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSubArray(v);

    return 0;
}