class RandomizedSet {
private:
    unordered_map<int, int> map;
    vector<int> nums;

public:
    RandomizedSet()
    {
    }

    bool insert(int val)
    {
        if (map.count(val))
        {
            return false;
        }

        map[val] = nums.size();
        nums.push_back(val);
        return true;
    }

    bool remove(int val)
    {
        if (map.count(val))
        {

            int idx = map[val];
            if (idx == nums.size() - 1)
            {
                nums.pop_back();
                map.erase(val);
                return true;
            }

            nums[idx] = nums.back();
            nums.pop_back();
            map.erase(val);
            
                map[nums[idx]] = idx;                
            
            return true;
        }

        return false;
    }

    int getRandom()
    {
        int k = rand() % nums.size();
        return nums[k];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet obj = new RandomizedSet();
 * bool param_1 = obj.insert(val);
 * bool param_2 = obj.remove(val);
 * int param_3 = obj.getRandom();
 */