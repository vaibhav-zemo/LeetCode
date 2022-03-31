#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    vector<int> ans(m + n);
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (nums1[i] >= nums2[j])
        {
            ans[k] = nums2[j];
            k++, j++;
        }
        else
        {
            ans[k] = nums1[i];
            k++, i++;
        }
    }

    while (i < m)
    {
        ans[k] = nums1[i];
        k++, i++;
    }

    while (j < n)
    {
        ans[k] = nums2[j];
        k++, j++;
    }

    nums1 = ans;
}

int main()
{

    return 0;
}