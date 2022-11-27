//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
    // 01001001
    //  0110101
    
public:	
	string addBinary(string A, string B)
	{
	    // your code here
	    bool carry = false;
	    int n = A.size();
	    string ans(max(n,(int)B.size()),'1');
	    int i=n-1,j = B.size()-1,k = max(n-1,(int)B.size()-1);
	    while(i>=0&&j>=0){
	        if(A[i]=='0' && B[j]=='0'){
	            if(carry){
	                ans[k] = '1';
	                carry = false;
	            }
	            else{
	                ans[k] = '0';
	            }
	        }
	        else if((A[i]=='1' && B[j]=='0') || (A[i]=='0' && B[j]=='1')){
	            if(carry){
	                ans[k] = '0';
	            }
	            else{
	                ans[k] = '1';
	            }
	        }
	        else{
	            if(carry){
	                ans[k] = '1';
	            }
	            else{
	                ans[k] = '0';
	                carry = 1;
	            }
	        }
	        i--;
	        j--;
	        k--;
	    }
	    while(i>=0){
	        if(A[i]=='1'){
    	        if(carry){
    	            ans[k] = '0'; 
    	        }
    	        else{
    	            ans[k] = '1';
    	        }
	        }
	        else{
	            if(carry){
	                ans[k] = '1';
	                carry = false;
	            }
	            else{
	                ans[k] = '0';
	            }
	        }
	        i--;
	        k--;
	    }
	    while(j>=0){
	        if(B[j]=='1'){
    	        if(carry){
    	            ans[k] = '0'; 
    	        }
    	        else{
    	            ans[k] = '1';
    	        }
	        }
	        else{
	            if(carry){
	                ans[k] = '1';
	                carry = false;
	            }
	            else{
	                ans[k] = '0';
	            }
	        }
	        j--;
	        k--;
	    }
	    
	   
	    if(carry){
	        ans =  '1' + ans;
	    }
	    
	    n = ans.size();
	    for(int i=0;i<n;i++){
	        if(ans[i]=='1'){
	            return ans.substr(i,n);
	        }
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string A, B; cin >> A >> B;
		Solution ob;
		cout << ob.addBinary (A, B);
		cout << "\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends