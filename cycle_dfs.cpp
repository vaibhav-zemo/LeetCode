#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;

vector<int> g[N];
bool vis[N];

bool dfs(int vertex,int parr)
{
    vis[vertex] = true;
    bool isLoopExist=false;
    for (int child : g[vertex])
    {
        // cout << "par"
        //      << " " << vertex << ",child"
        //      << " " << child << endl;
        if(vis[child] && child==parr) continue;
        if (vis[child])
            return true;
        isLoopExist |= dfs(child,vertex);
    }
    return isLoopExist;
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    bool isLoopExist=false;
    for(int i=1;i<=n;i++){ 
        if(vis[i]){
            continue;
        }
        if(dfs(i,0)){
            isLoopExist=true;
            break;
        }
        
    }
    cout<<isLoopExist<<endl;
}