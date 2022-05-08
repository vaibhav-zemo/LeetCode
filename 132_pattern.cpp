#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

bool find132pattern(vector<int> &nums)
{
    int n = nums.size();
    vector<int> minarr(n);
    minarr[0] = nums[0];
    for (int i = 1; i < n; i++)
    {
        minarr[i] = min(minarr[i - 1], minarr[i]);
    }
    stack<int> st;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= minarr[i])
        {
            st.pop();
        }
        if (!st.empty() && st.top() < nums[i])
        {
            return true;
        }
        st.push(nums[i]);
    }
    return false;
}

int main()
{
    return 0;
}