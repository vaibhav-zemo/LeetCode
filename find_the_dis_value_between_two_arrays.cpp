#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int findTheDistanceValue(vector<int> &arr1, vector<int> &arr2, int d)
    {
        int ans = 0;
        for (int i = 0; i < arr1.size(); i++)
        {
            bool ff = false;
            for (int j = 0; j < arr2.size(); j++)
            {
                if (abs(arr1[i] - arr2[j]) <= d)
                {
                    ff = true;
                    break;
                }
            }
            if (!ff)
            {
                ans++;
            }
        }
        return ans;
    }
};

// 4 5 8          1 8 9 10

int main()
{

    return 0;
}