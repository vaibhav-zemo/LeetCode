#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int> &nums)
{
    int a[nums.size()];
    int i;

    for (i = 0; i < nums.size(); i++)
    {
        a[i] = 0;
    }
    for (i = 0; i < nums.size(); i++)
    {

        if (a[nums[i]] != 0)
            return nums[i];
        a[nums[i]] = 1;
    }
    return nums[i];
}

int main()
{

    return 0;
}