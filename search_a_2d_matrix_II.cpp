#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int s = matrix.size();
        int q = matrix[0].size();
        for (int i = 0; i < s; i++)
        {
            vector<int> temp = matrix[i];
            if (target >= temp[0] && target <= temp[q - 1])
            {
                int m = 0;
                int n = q - 1;
                while (m < n)
                {
                    int mid = (m + n) / 2;
                    if (temp[mid] == target)
                    {
                        return true;
                    }
                    else if (temp[mid] < target)
                    {
                        m = mid + 1;
                    }
                    else
                    {
                        n = mid - 1;
                    }
                }
            }
        }
        return false;
    }
};

int main()
{

    return 0;
}