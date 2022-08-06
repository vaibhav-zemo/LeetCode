#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int specialArray(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = 0; i <= nums.size(); i++)
        {
            int lb = lower_bound(nums.begin(), nums.end(), i) - nums.begin();
            if (nums.size() - lb == i)
                return i;
        }
        return -1;
    }
};

int main()
{

    return 0;
}