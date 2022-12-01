//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    bool is(string &s1,string &s2,int k){
        int i=0,j=k;
        while(i<s1.size() && j<s2.size()){
            if(s1[i]!=s2[j]) return false;
            i++;
            j++;
        }
        j = 0;
        while(j<k && i<s1.size()){
            if(s1[i]!=s2[j]) return false;
            j++;
            i++;
        }
        return true;
    }
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
        if(s1.size()!=s2.size()) return false;
        char ch = s1[0];
        vector<int> arr;
        for(int i=0;i<s2.size();i++){
            if(ch==s2[i]) arr.push_back(i);
        }
        for(int i=0;i<arr.size();i++){
            if(is(s1,s2,arr[i])) return true;
        }
        return false;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}

// } Driver Code Ends