class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char,int> mp;
        for(char ch:s) mp[ch]++;
        vector<pair<int,char>> arr;
        for(auto it:mp){
            arr.push_back({it.second,it.first});
        }
        sort(arr.rbegin(),arr.rend());
        string ans = "";
        for(auto it:arr){
            int cnt = it.first;
            while(cnt--){
                ans.push_back(it.second);                
            }
        }
        return ans;
    }
};