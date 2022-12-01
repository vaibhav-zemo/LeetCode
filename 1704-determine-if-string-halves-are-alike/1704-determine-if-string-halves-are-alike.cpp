class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_map<char,int> mp = {{'a',1},{'e',1},{'i',1},{'o',1},{'u',1}};
        int cnt = 0,temp = 0;
        for(int i=0;i<s.size();i++){
            s[i] = tolower(s[i]);
            if(mp.find(s[i])!=mp.end()){
                if(i<s.size()/2) temp++;
                cnt++;
            }
        }
        return (temp*1)==((cnt*1.0)/2);
    }
};