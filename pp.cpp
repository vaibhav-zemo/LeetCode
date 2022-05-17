#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

bool check(ll a, ll b)
{
    while (a && b)
    {
        if ((1 & a) == (1 & b))
        {
            return true;
        }
        a >>= 1;
        b >>= 1;
    }
    return false;
}

int main()
{

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        ll *arr = new ll[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll ans = 0;
        ll cnt = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                cnt++;
                i++;
                continue;
            }

            if (!check(arr[i], arr[i + 1]))
            {
                ans++;
                i++;
            }
        }

        cout << n - ans - 2 * cnt << endl;
    }
    return 0;
}