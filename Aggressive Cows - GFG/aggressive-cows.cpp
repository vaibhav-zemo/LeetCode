//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    bool is(vector<int> &arr,int k,int mid){
        int st = arr[0];
        int cnt = 1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]-st>=mid){
                cnt++;
                st = arr[i];
                if(cnt>=k) return true;
            }
        }
        return false;
    }
public:

    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin(),stalls.end());
        long long st = 0,end = stalls.back()-stalls[0];
        int ans = 0;
        while(st<=end){
            long long mid = (end-st)/2 +st;
            // cout<<mid<<endl;
            if(is(stalls,k,mid)){
                // cout<<st<<endl;
                ans = mid;
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return ans;
        // 1 2 5 7 10
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends