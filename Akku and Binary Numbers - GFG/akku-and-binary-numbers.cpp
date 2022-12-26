//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    void precompute()
    {
        // Code Here
    }
    
    long long to_decimal(string st){
        long long ans = 0;
        int n = st.size(),cnt = 0;
        for(int i=n-1;i>=0;i--){
            ans += pow(2,cnt)*(st[i]-'0');
            cnt++;
        }
        return ans;
    }
    
    unordered_map<string,int> mp;

    long long helper(string st,long long l,long long r)
    {
        int cnt = 0;
        for(char ch:st){
            if(ch=='1') cnt++;
        }
        if(to_decimal(st)>r || cnt>3) return 0;
        
        if(mp.find(st)!=mp.end()) return mp[st];
        
        long long x = to_decimal(st);
        
        if(x>=l && x<=r && cnt==3){
            return mp[st] = 1 + helper(st+"0",l,r);
        }
        
        return mp[st] = helper(st+"0",l,r) + helper(st+"1",l,r);
    }
    
    long long solve(long long l, long long r){
        // Code Here
        mp.clear();
        return helper("1",l,r);
    }
    
};



//{ Driver Code Starts.

int main()
{
    int t;
    Solution ob;
    ob.precompute();
    cin>>t;
    while(t--)
    {
        long long l,r;
        cin>>l>>r;
        cout << ob.solve(l, r) << endl; 
    }
    return 0;
}
// } Driver Code Ends