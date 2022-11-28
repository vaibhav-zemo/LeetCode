//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    // code here
	    int max_sum = -1,max_len = 0,min_idx = n;
	    int j = 0,sum = 0;
	    for(int i=0;i<n;i++){
	        
	        if(a[i]<0){
	            j = i+1;
	            sum = 0;
	            continue;
	        }
	        
	        sum += a[i];
	        
	        if(max_sum<sum){
	            max_sum = sum;
	            max_len = i-j+1;
	            min_idx = j;
	           // cout<<sum<<" "<<min_idx<< endl;
	        }
	        else if(max_sum==sum){
	            if(max_len<(i-j+1)){
	                max_len = (i-j+1);
	            }      
	        }
	    }
	    
	    vector<int> ans;
	    if(max_sum==-1){
	        ans.push_back(-1);
	        return ans;
	    }
	    while(max_len>0){
	        ans.push_back(a[min_idx]);
	        min_idx++;
	        max_len--;
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends