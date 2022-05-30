#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
    pair<int, int> count(string st)
    {
        int one = 0, zero = 0;
        for (char ch : st)
        {
            if (ch == '1')
                one++;
            if (ch == '0')
                zero++;
        }
        return {zero, one};
    }

    int helper(vector<string> &strs, int i, int m, int n, int cm, int cn)
    {
        if (i == strs.size())
        {
            return 0;
        }
        if (cm == m && cn == n)
        {
            return 1;
        }

        pair<int, int> p = count(strs[i]);
        int x = 0, y = 0;
        if (cm + p.first <= m && cn + p.second <= n)
        {
            x += helper(strs, ++i, m, n, cm + p.first, cn + p.second) + 1;
        }
        else
        {
            y += helper(strs, ++i, m, n, cm, cn);
        }

        return max(x, y);
    }

public:
    int findMaxForm(vector<string> &strs, int m, int n)
    {
        int ans = helper(strs, 0, m, n, 0, 0);
        return ans;
    }
};

int main()
{

    return 0;
}