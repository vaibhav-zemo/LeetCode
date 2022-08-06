#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int n = grid.size(), m = grid[0].size(), ans = 0;
        for (int i = 0; i < n; i++)
        {
            int st = 0, end = m - 1;
            vector<int> arr = grid[i];
            while (st <= end)
            {
                int mid = st + (end - st) / 2;
                if (arr[mid] >= 0)
                {
                    st = mid - 1;
                }
                else
                {
                    end = mid + 1;
                }
            }
            ans += (m - st);
        }
        return ans;
    }
};

int main()
{

    return 0;
}