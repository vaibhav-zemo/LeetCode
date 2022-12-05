class Solution
{
    void bfs(vector<int> adj[], int node, vector<int> &vis)
    {
        if (vis[node] != -1) return;
        vis[node]++;
        for (int x: adj[node])
        {
            bfs(adj, x, vis);
        }
    }
    public:
        int findCircleNum(vector<vector < int>> &adj)
        {
            int V = adj.size();
            vector<int> mt[V];

            for (int i = 0; i < adj.size(); i++)
            {
                for (int j = 0; j < adj[0].size(); j++)
                {
                    if (adj[i][j] && i != j)
                    {
                        mt[i].push_back(j);
                        mt[j].push_back(i);
                    }
                }
            }
            vector<int> vis(V, -1);
            int ans = 0;
            for (int i = 0; i < V; i++)
            {
                if (vis[i] == -1)
                {
                    ans++;
                    bfs(mt, i, vis);
                }
            }
            return ans;
        }
};