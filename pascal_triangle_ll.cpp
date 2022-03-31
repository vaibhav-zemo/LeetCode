#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> getRow(int rowIndex)
{
    vector<int> temp;
    int cnt = 0;
    while (cnt <= rowIndex)
    {
        if (cnt == 0)
        {
            temp = {1};
        }
        else if (cnt == 1)
        {
            temp = {1, 1};
        }
        else
        {
            vector<int> v(cnt + 1);
            v[0] = 1, v[cnt] = 1;
            for (int i = 1; i < temp.size() - 1; i++)
            {
                v[i] = temp[i] + temp[i - 1];
            }
            temp = v;
        }
        cnt++;
    }
    return temp;
}

int main()
{

    return 0;
}