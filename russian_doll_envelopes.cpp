#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
    unordered_map<int, unordered_map<int, int>> mp;
    unordered_map<int, int> vis;
    int dfs(int k)
    {
        int ans = 1;
        for (auto it : mp[k])
        {
            if (vis[it.first] != 1)
            {
                vis[it.first] = 1;
                ans += dfs(it.first);
                vis[it.first] = 0;
            }
        }
        return ans;
    }

public:
    int maxEnvelopes(vector<vector<int>> &envelopes)
    {
        sort(envelopes.begin(), envelopes.end());
        for (int i = 0; i < envelopes.size() - 1; i++)
        {
            for (int j = i + 1; j < envelopes.size(); j++)
            {
                if (envelopes[i][0] < envelopes[j][0] && envelopes[i][1] < envelopes[j][1])
                {
                    mp[i][j]++;
                    mp[j][i]++;
                }
            }
        }

        int ans = 1;
        for (auto it : mp)
        {
            vis[it.first] = 1;
            ans = max(ans, dfs(it.first));
            vis[it.first] = 0;
        }
        return ans;
    }
};

int main()
{

    return 0;
}