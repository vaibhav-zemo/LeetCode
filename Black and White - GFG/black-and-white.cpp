//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

long long numOfWays(int n, int m);

int main() {
    // code
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        cout << numOfWays(n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends


//Function to find out the number of ways we can place a black and a 
//white Knight on this chessboard such that they cannot attack each other.
int is(int i,int j,int n,int m){
    if(i<0 || j<0 || i>=n || j>=m) return false;
    return true;
}
long long numOfWays(int N, int M)
{
    // write code here
    long long z = 1000000007;
    long long ans = (((N*M)%z)*((N*M)%z-1)%z)%z;
    vector<int> x = {-1,-1,1,1,2,2,-2,-2};
    vector<int> y = {-2,2,-2,2,1,-1,1,-1};
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++)
        {
            for(int k=0;k<8;k++){
                if(is(i+x[k],j+y[k],N,M)){
                    // cout<<i+x[k]<<" "<<j+y[k]<<endl;
                    ans--;
                    // break;
                }
            }
        }
    }
    return ans;
}