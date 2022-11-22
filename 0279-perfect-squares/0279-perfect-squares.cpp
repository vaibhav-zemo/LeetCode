class Solution {
    vector<int> dp;
    int helper(int n){
        if(n<0) return 10000;
        if(n==0) return 0;
        if(dp[n]!=-1) return dp[n];
        int ans = 10000;
        for(int i=sqrt(n);i>0;i--){
            ans = min(helper(n-i*i) + 1,ans);
        }
        return dp[n] = ans;
        
    }
public:
    int numSquares(int n) {
        dp.resize(n+1,-1);
        return helper(n);
    }
};