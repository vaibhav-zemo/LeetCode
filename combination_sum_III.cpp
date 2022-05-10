#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    vector<vector<int>> ans;
    vector<int> v;
    void helper(int k, int n, int j)
    {
        if (k == 0)
        {
            if (n == 0)
            {
                ans.push_back(v);
                return;
            }
            return;
        }

        for (int i = j; i <= 9; i++)
        {
            v.push_back(i);
            helper(k - 1, n - i, i + 1);
            v.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum3(int k, int n)
    {
        helper(k, n, 1);
        return ans;
    }
};

int main()
{

    return 0;
}