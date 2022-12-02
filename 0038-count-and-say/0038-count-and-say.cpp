class Solution {
public:
    string countAndSay(int n) {
        string ans = "1";
        n--;
        while(n--){
            string temp = "";
            for(int i=ans.size()-1;i>=0;i--){
                char ch = ans[i];
                int cnt = 1;
                while(i>0 && ans[i]==ans[i-1]){
                    cnt++;
                    i--;
                }
                temp = to_string(cnt) + ch + temp;
            }
            ans = temp;
        }
        return ans;
    }
};