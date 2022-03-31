#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int st = 0, end = nums.size() - 1;
        int mid = (st + end) / 2;
        int ans;
        while (st <= end)
        {
            if (nums[mid] > target)
            {
                end = mid - 1;
                ans = end;
            }
            else if (nums[mid] < target)
            {
                st = mid + 1;
                ans = st;
            }
            else
            {
                ans = mid;
                break;
            }
            mid = (st+end)/2;
        }
        return ans;
    }
};

int main()
{

    int arr[] = {1, 3, 5, 6};
    auto it = upper_bound(arr, arr + 4, 5);
    cout << it - arr << endl;

    return 0;
}