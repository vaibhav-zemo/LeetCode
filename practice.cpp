#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int cnt = 1;
        int j = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1])
            {
                continue;
            }
            cnt++;
            nums[j] = nums[i];
            j++;
        }
        return cnt;
    }
};

int main()
{

    return 0;
}