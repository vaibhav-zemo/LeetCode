#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int rob(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> v(n + 2, 0);

        for (int i = n - 1; i >= 0; i--)
        {
            int x = nums[i] + v[i + 2];
            int y = 0;
            if (i + 1 < n)
            {
                y = nums[i + 1] + v[i + 3];
            }
            v[i] = max(x, y);
        }

        vector<int> vec(n + 2, 0);

        for (int i = n - 2; i >= 0; i--)
        {
            int x = nums[i] + vec[i + 2];
            int y = 0;
            if (i + 1 < n - 1)
            {
                y = nums[i + 1] + vec[i + 3];
            }
            vec[i] = max(x, y);
        }

        return max(v[1],max(vec[0],vec[1]));
    }
};

int main()
{

    return 0;
}