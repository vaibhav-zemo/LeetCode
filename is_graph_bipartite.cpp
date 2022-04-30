#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int col[101];
    int vis[101];

    bool dfs(vector<vector<int>> graph, int i, int c)
    {
        col[i] = c;
        vis[i]++;

        for (auto j : graph[i])
        {
            if (vis[j] == 0)
            {
                if (dfs(graph, j, c ^ 1) == false)
                {
                    return false;
                }
            }
            else
            {
                if (col[i] == col[j])
                {
                    return false;
                }
            }
        }

        return true;
    }
    bool isBipartite(vector<vector<int>> &graph)
    {
        int n = graph.size();
        for (int i = 0; i < n; i++)
        {
            if (col[i] == 0 && dfs(graph, i, 0) == false)
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{

    return 0;
}