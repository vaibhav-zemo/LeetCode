#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int sum = 0, sum2 = 0;
        for (int x : nums)
        {
            sum += x;
        }

        for (int i = 1; i <= nums.size(); i++)
        {
            sum2 += i;
        }

        return (sum2 - sum);
    }
};

int main()
{

    return 0;
}