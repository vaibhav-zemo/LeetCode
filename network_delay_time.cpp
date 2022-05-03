#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

class Solution
{

public:
    int networkDelayTime(vector<vector<int>> &times, int n, int k)
    {
        vector<vector<pair<int, int>>> adj(101);
        for (auto v : times)
        {
            adj[v[0]].push_back(make_pair(v[1], v[2]));
        }

        vector<int> dis(101, INT_MAX);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        dis[k] = 0;
        pq.push(make_pair(dis[k], k));

        while (!pq.empty())
        {
            int curr_dis = pq.top().first;
            int curr_pos = pq.top().second;
            pq.pop();

            for (auto it : adj[curr_pos])
            {
                int next_pos = it.first;
                int next_dis = it.second;

                if (dis[next_pos] > dis[curr_pos] + next_dis)
                {
                    dis[next_pos] = dis[curr_pos] + next_dis;
                    pq.push({dis[next_pos], next_pos});
                }
            }
        }

        int mx = INT_MIN;
        for (int i = 1; i <= n; i++)
        {
            if (i != k && dis[i] == INT_MAX)
                return -1;
            mx = max(mx, dis[i]);
        }

        return mx;
    }
};

int main()
{

    return 0;
}