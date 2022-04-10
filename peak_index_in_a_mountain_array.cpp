#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int peakIndexInMountainArray(vector<int> &arr)
{
    int i = 0, j = arr.size() - 1, n = arr.size();
    int ans = 0;
    if (arr[0] > arr[1])
    {
        return 0;
    }
    if (arr[n - 1] > arr[n - 2])
    {
        return n - 1;
    }

    while (i <= j)
    {
        int mid = (i + j) / 2;
        if (mid != 0 && mid != n - 1 && arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
        {
            ans = mid;
            break;
        }
        else if (mid != 0 && arr[mid - 1] > arr[mid])
        {
            j = mid - 1;
        }
        else if (mid != n - 1 && arr[mid + 1] > arr[mid])
        {
            i = mid + 1;
        }
    }
    return ans;
}

int main()
{

    return 0;
}