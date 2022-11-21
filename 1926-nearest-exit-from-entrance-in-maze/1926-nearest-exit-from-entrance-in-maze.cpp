class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& e) {
        queue<pair<int,int>> q;
        q.push({e[0],e[1]});
        int cnt = 0,n = maze.size(),m = maze[0].size();
        while(!q.empty()){
            int s = q.size();
            for(int i=0;i<s;i++){
                pair<int,int> p = q.front();
                q.pop();
                int x = p.first,y = p.second;
                if(maze[x][y]=='+') continue;
                maze[x][y] = '+';
                if(!(x==e[0] && y==e[1]) && (x==0 || x==(n-1) || y==0 || y==(m-1))) return cnt;
                // cout<<x<<" "<<y<<endl;
                if(x!=n-1 && maze[x+1][y]=='.') q.push({x+1,y});
                if(y!=m-1 && maze[x][y+1]=='.') q.push({x,y+1});
                if(x!=0 && maze[x-1][y]=='.') q.push({x-1,y});
                if(y!=0 && maze[x][y-1]=='.') q.push({x,y-1});
            }
            cnt++;
        }
        return -1;
    }
};