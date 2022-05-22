#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution
{
    vector<vector<int>> ans;
    void helper(int k, unordered_map<int, vector<int>> map, unordered_map<int, int> visited)
    {
        visited[k]++;
        vector<int> v = map[k];

        if (v.size() == 1)
        {
            vector<int> t(2);
            t[0] = k;
            t[1] = v[0];
            ans.push_back(t);
        }

        for (int i = 0; i < v.size(); i++)
        {
            if (!visited[v[i]])
            {
                helper(v[i], map, visited);
            }
        }
    }

public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>> &connections)
    {
        unordered_map<int, vector<int>> map;
        for (auto v : connections)
        {
            vector<int> vec = map[v[0]];
            vec.push_back(v[1]);
            map[v[0]] = vec;
        }

        unordered_map<int, int> visited;
        helper(connections[0][0], map, visited);
        return ans;
    }
};

int main()
{

    return 0;
}