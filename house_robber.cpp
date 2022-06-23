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
        vector<int> vec(n + 4, 0);

        for (int i = n - 1; i >= 0; i--)
        {
            int x = nums[i] + vec[i + 2];
            int y = nums[i + 1] + vec[i + 3];
            vec[i] = max(x, y);
        }

        return max(vec[0], vec[1]);
    }
};

int main()
{

    return 0;
}