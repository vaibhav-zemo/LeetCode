#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void merge(vector<int> &count, vector<pair<int, int>> &v, int st, int end, int mid)
{
    vector<pair<int, int>> temp(end - st + 1);

    int i = st, j = mid + 1, k = 0;
    while (i <= mid && j <= end)
    {
        if (v[i].first <= v[j].first)
        {
            temp[k++] = v[j++];
        }
        else
        {
            count[v[i].second] += end - j + 1;
            temp[k++] = v[i++];
        }
    }

    while (i <= mid)
    {
        temp[k++] = v[i++];
    }

    while (j <= end)
    {
        temp[k++] = v[j++];
    }

    for (int i = st; i <= end; i++)
    {
        v[i] = temp[i - st];
    }

    return;
}

void mergesort(vector<int> &count, vector<pair<int, int>> &v, int st, int end)
{
    if (st < end)
    {
        int mid = (end - st) / 2 + st;

        mergesort(count, v, st, mid);
        mergesort(count, v, mid + 1, end);

        merge(count, v, st, end, mid);
    }
    return;
}

vector<int> countSmaller(vector<int> &nums)
{
    int l = nums.size();
    vector<pair<int, int>> v(l);
    for (int i = 0; i < l; i++)
    {
        v[i].first = nums[i];
        v[i].second = i;
    }

    vector<int> count(l, 0);
    mergesort(count, v, 0, l - 1);
    return count;
}

int main()
{

    return 0;
}