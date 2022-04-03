#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

class RandomizedCollection
{
private:
    unordered_map<int, int> map;
    vector<int> nums;

public:
    RandomizedCollection()
    {
    }

    bool insert(int val)
    {
        bool ans = map.count(val);

        map[val] = nums.size();
        nums.push_back(val);

        return !ans;
    }

    bool remove(int val)
    {
        if (!map.count(val))
        {
            return false;
        }
        int presentIdx = map[val];
        nums[presentIdx] = nums[nums.size() - 1];
        nums.pop_back();

        map.erase(val);
        map[nums[presentIdx]] = presentIdx;
        return true;
    }

    int getRandom()
    {
        int randIdx = rand() % nums.size();
        return nums[randIdx];
    }
};

int main()
{

    return 0;
}