#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> v(2);
    int st = -1, end = -1;
    int check = binary_search(nums.begin(), nums.end(), target);
    auto it = lower_bound(nums.begin(), nums.end(), target);
    auto it2 = upper_bound(nums.begin(), nums.end(), target);

    if (check)
    {
        st = it - nums.begin();
        end = it2 - nums.begin() - 1;
    }

    v[0] = st, v[1] = end;
    return v;
}

int main()
{
    vector<int> t = {2};
    vector<int> v = searchRange(t, 2);
    cout << v[0] << " " << v[1] << endl;
    return 0;
}