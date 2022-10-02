#include<iostream>

using namespace std;
string remove_dup(string s){
    if (s.length()==0)
    {
        return "";
    }
    char ch=s[0];
    string ans = remove_dup(s.substr(1));
    if (ch==ans[0])
    {
        return ans;
    }
    else
    return ch+ans;
    
    
}
int main(){
    string s;
    cin>>s;
    remove_dup(s);
    cout<<remove_dup(s);
    return 0;
}