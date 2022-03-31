#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class RandomizedSet
{
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

main()
{

    return 0;
}