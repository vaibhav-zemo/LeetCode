#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int st = 0, end = matrix.size() - 1;
    while (st <= end)
    {
        int mid = (st + end) / 2;
        vector<int> v = matrix[mid];
        int l = v.size();
        bool temp = binary_search(v.begin(), v.end(), target);
        if (temp)
        {
            return true;
        }
        else
        {
            int first = v[0];
            int last = v[l - 1];

            if (target < first)
            {
                end--;
            }
            else if (target > last)
            {
                st++;
            }
        }
    }
    return false;
}

int main()
{

    return 0;
}