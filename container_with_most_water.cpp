#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int maxArea(vector<int> &height)
{
    int l = height.size();
    int max_area = 0;
    int i = 0, j = l - 1;
    while (i < j)
    {
        max_area = max(max_area, (j - i) * min(height[i], height[j]));
        if (height[i] <= height[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return max_area;
}

int main()
{
    vector<int> v = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea(v);

    return 0;
}