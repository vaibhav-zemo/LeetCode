#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int kthSmallest(vector<vector<int>> &matrix, int k)
    {
        int n = matrix.size();
        vector<int> arr(n * n);

        int i = 0;
        for (vector<int> v : matrix)
        {
            for (int x : v)
            {
                arr[i] = x;
                i++;
            }
        }
        sort(arr.begin(), arr.end());
        int j = 1;
        for (int x : arr)
        {
            if (j == k)
            {
                return x;
            }
            j++;
        }
        return -1;
    }
};

int main()
{

    return 0;
}