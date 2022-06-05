#include <iostream>
#include <vector>
using namespace std;

class NumMatrix
{
    vector<vector<int>> mt;

public:
    NumMatrix(vector<vector<int>> &matrix)
    {
        int m = matrix.size();
        int n = matrix[0].size();

        mt.resize(m, vector<int>(n));
        for (int i = 0; i < m; i++)
        {
            int sum = 0;
            for (int j = 0; j < n; j++)
            {
                sum += matrix[i][j];
                mt[i][j] = sum;   
            } 
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2)
    {
        int ans = 0;
        for (int i = row1; i <= row2; i++)
        {            
            if(col1==0){
                ans += mt[i][col2];
                continue;
            }
            ans += (mt[i][col2] - mt[i][col1-1]);
        }

        return ans;
    }
};


int main()
{

    return 0;
}