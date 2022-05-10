#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    vector<vector<int>> ans;
    vector<int> v;

    void helper(int n, int k, int j)
    {
        if (k == 1)
        {
            for (int i = j; i <= n; i++)
            {
                v.push_back(i);
                ans.push_back(v);
                v.pop_back();
            }
            return;
        }

        for (int i = j; i <= n - k + 1; i++)
        {
            v.push_back(j);
            helper(n, k - 1, j + 1);
            v.pop_back();
        }
    }

public:
    vector<vector<int>> combine(int n, int k)
    {
        helper(n, k, 1);
        return ans;
    }
};

int main()
{

    return 0;
}