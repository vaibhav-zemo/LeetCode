#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        k %= n;
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            ans[(i + k) % n] = nums[i];
        }
        for(int i=0;i<n;i++){
            nums[i] = ans[i];
        }
    }
};

int main()
{

    return 0;
}