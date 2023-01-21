//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minVal(int a, int b) {
        // code here
        int cnt = 0;
        while(b!=0){
            if(b&1) cnt++;
            b /=2;
            
        }
        
        int cnt2 = 0;
        int temp = a;
        while(temp!=0){
            if(temp&1) cnt2++;
            temp /=2;
        }
        
        int left = cnt2 - cnt;
        int ans = 0,idx = 0;
        temp = a;
        if(left==0) return a;
        else if(left>0){
            while(temp!=0){
                if(temp&1){
                    left--;
                    if(left<0) ans += pow(2,idx);
                }
                temp /=2;
                idx++;
            }
        }
        else{
            left = abs(left);
            while(temp){
                if(temp&1){
                    ans += pow(2,idx);
                }
                else if(left>0){
                    left--;
                    ans += pow(2,idx);
                }
                temp /=2;
                idx++;
            }
        }
        
        while(left>0){
            ans += pow(2,idx);
            idx++;
            left--;
        }
        
        return ans;
    }

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends