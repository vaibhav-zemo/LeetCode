//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
    // vector<int> dp;
    // int helper(int *arr,int n,int i){
    //     if(i>=n) return 0;
        
    //     if(dp[i]!=-1) return dp[i];
    //     int x = helper(arr,n,i+1);
    //     x = max(x,helper(arr,n,i+2) + arr[i]);
        
    //     return dp[i] = x;
    // }
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    // code here
	    vector<int> dp(n+2);
	    for(int i=(n-1);i>=0;i--){
	        int x = dp[i+1];
	        x = max(x,dp[i+2]+arr[i]);
	        dp[i] = x;
	    }
	   //dp.resize(n+1,-1);
	    return dp[0];
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends