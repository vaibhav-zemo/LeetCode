#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
    vector<vector<int>> ans;
    vector<int> v;

    void helper(vector<int> &candidates, int target, int j)
    {
        if (target == 0)
        {
            ans.push_back(v);
            return;
        }

        for (int i = j; i < candidates.size(); i++)
        {
            if (i > j && candidates[i] == candidates[i - 1])
            {
                continue;
            }

            if (target - candidates[i] >= 0)
            {
                v.push_back(candidates[i]);
                helper(candidates, target - candidates[i], i + 1);
                v.pop_back();
            }
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        sort(candidates.begin(), candidates.end());
        helper(candidates, target, 0);
        return ans;
    }
};

int main()
{

    return 0;
}

// 1 1 2 5 6 7 10