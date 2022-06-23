#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{

public:
    int minimumTotal(vector<vector<int>> &triangle)
    {
        int n = triangle.size();
        vector<vector<int>> vec(n);
        for (int i = 0; i < n; i++)
        {
            int m = triangle[i].size();
            vector<int> temp(m);
            vec[i] = temp;
        }

        for (int i = 0; i < triangle[n - 1].size(); i++)
        {
            vec[n - 1][i] = triangle[n - 1][i];
        }

        for (int i = n - 2; i >= 0; i--)
        {
            int cnt = triangle[i].size();
            for (int j = 0; j < cnt; i++)
            {
                vec[i][j] = min(vec[i + 1][j], vec[i + 1][j + 1]);
            }
        }

        return vec[0][0];
    }
};

int main()
{

    return 0;
}