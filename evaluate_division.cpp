#include <iostream>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    double dfs(unordered_map<string, unordered_map<string, double>> graph, string from, string to, unordered_set<string> vis)
    {
        if (graph[from].find(to) != graph[from].end())
        {
            return graph[from][to];
        }
        for (auto it : graph[from])
        {
            if (vis.find(it.first) == vis.end())
            {
                vis.insert(it.first);
                double val = dfs(graph, it.first, to, vis);
                if (val)
                {
                    graph[from][to] = val * it.second;
                    return graph[from][to];
                }
            }
        }

        return 0;
    }

    vector<double> calcEquation(vector<vector<string>> &equations, vector<double> &values, vector<vector<string>> &queries)
    {
        unordered_map<string, unordered_map<string, double>> graph;
        vector<double> ans;
        int n = values.size();

        for (int i = 0; i < n; i++)
        {
            graph[equations[i][0]][equations[i][1]] = values[i];
            graph[equations[i][1]][equations[i][0]] = (double)1 / values[i];
        }

        for (int i = 0; i < n; i++)
        {
            unordered_set<string> vis;
            double val = dfs(graph, queries[i][0], queries[i][1], vis);
            if (!val)
            {
                ans.push_back(-1.0);
            }
            else
            {
                ans.push_back(val);
            }
        }
        return ans;
    }
};

int main()
{

    return 0;
}