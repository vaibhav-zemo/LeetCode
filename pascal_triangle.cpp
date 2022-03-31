#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> ans;
    int m = 0;
    int cnt = 1;
    while (cnt <= numRows)
    {
        if (cnt == 1)
        {
            ans.push_back({1});
            m++;
        }
        else if (cnt == 2)
        {
            ans.push_back({1, 1});
            m++;
        }
        else
        {
            vector<int> temp(cnt);
            cout << temp.size() << endl;
            temp[0] = 1, temp[cnt - 1] = 1;
            for (int i = 1; i < cnt - 1; i++)
            {
                temp[i] = ans[m-1][i] + ans[m-1][i - 1];
            }
            m++;
            ans.push_back(temp);
        }
        cnt++;
    }
    return ans;
}

int main()
{
    vector<vector<int>> v = generate(5);
    for (auto i : v)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}