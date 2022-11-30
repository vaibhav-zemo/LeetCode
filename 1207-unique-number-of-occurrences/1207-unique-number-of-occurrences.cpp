class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int x:arr) mp[x]++;
        unordered_map<int,int> freq;
        for(auto it:mp){
            if(freq.find(it.second)!=freq.end()) return false;
            freq[it.second]++;
        }
        return true;
    }
};