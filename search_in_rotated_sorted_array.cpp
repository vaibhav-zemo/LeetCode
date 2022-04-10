#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int search(vector<int> &nums, int target)
{
    map<int, int> map;
    for (int i = 0; i < nums.size(); i++)
    {
        map[nums[i]] = i;
    }
    sort(nums.begin(), nums.end());
    int i = 0, j = nums.size();
    int ans = -1;
    while (i <= j)
    {
        int mid = (i + j) / 2;
        if (nums[mid] == target)
        {
            ans = map[target];
            break;
        }
        else if (nums[mid] < target)
        {
            i = mid + 1;
        }
        else
        {
            j = mid - 1;
        }
    }
    return ans;
}

int main()
{

    return 0;
}