#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution
{
public:
    int xorAllNums(vector<int> &nums1, vector<int> &nums2)
    {
        int n = nums1.size();
        int m = nums2.size();
        int res = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans ^= nums1[i];
        }
        for (int i = 0; i < m; i++)
        {
            res ^= nums2[i];
        }
        if (m % 2 == 0 && n % 2 == 0)
        {
            return 0;
        }
        else if (m % 2 == 0 && n % 2 != 0)
        {
            return res;
        }
        else if (n % 2 == 0 && m % 2 != 0)
        {
            return ans;
        }
        else
            return ans ^ res;
    }
};