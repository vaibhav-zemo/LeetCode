#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long findMinDiff(vector<long long> a, long long n, long long m)
{
    sort(a.begin(), a.end());
    long long ans = 1e9 + 1;
    int j = 0;
    ans = a[m - 1] - a[0];
    j++;
    for (int i = m; i < n; i++)
    {
        ans = min(ans, a[i] - a[j]);
        j++;
    }
    return ans;
}

int main()
{

    return 0;
}