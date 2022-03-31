#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    int m = nums1.size();
    int n = nums2.size();
    int i = 0, j = 0, k = 0;
    vector<int> merge(m + n);
    while (i < m && j < n)
    {
        if (nums1[i] <= nums2[j])
        {
            merge[k] = nums1[i];
            k++, i++;
        }
        else
        {
            merge[k] = nums2[j];
            k++, j++;
        }
    }

    while (i < m)
    {
        merge[k] = nums1[i];
        k++, i++;
    }

    while (j < n)
    {
        merge[k] = nums2[j];
        k++, j++;
    }

    int total = m + n;
    int median_n;
    if (total % 2 != 0)
    {
        median_n = (total + 1) / 2;
        return merge[median_n];
    }
    else
    {
        return (merge[total / 2] + merge[(total / 2) + 1]) / 2;
    }
}

int main()
{

    return 0;
}