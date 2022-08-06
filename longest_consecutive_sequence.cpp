#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        if (nums.size() == 0)
        {
            return 0;
        }
        set<int> st;
        for (int x : nums)
        {
            st.insert(x);
        }
        auto it = st.begin();
        for (int i = 0; i < st.size(); i++)
        {
            nums[i] = *(it);
            it++;
        }
        int ans = 0, cnt = 0;
        for (int i = 1; i < st.size(); i++)
        {
            if ((nums[i] - nums[i - 1]) != 1)
            {
                ans = max(ans, cnt);
                cnt = 0;
            }
            else
            {
                cnt++;
            }
        }
        ans = max(ans, cnt);
        return ans + 1;
    } // 8 + 15 
};

int main()
{

    return 0;
}