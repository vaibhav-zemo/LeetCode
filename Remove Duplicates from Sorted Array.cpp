#include <iostream>
#include <map>
#include <vector>
#include <set>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        set<int> ans;
        int k;
        for (int i = 0; i < nums.size(); i++)
        {
            ans.insert(nums[i]);
        }
        k = ans.size();
        auto it = ans.begin();
        for (int i = 0; i < k; i++, it++)
        {
            nums[i] = *it;
        }

        return k;
    }
};

int main()
{

    return 0;
}