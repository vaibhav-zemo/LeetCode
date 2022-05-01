#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int minimumCardPickup(vector<int> &cards)
    {
        unordered_map<int, pair<int, int>> map;
        for (int i = 0; i < cards.size(); i++)
        {
            if (map.count(cards[i]))
            {
                pair<int, int> p = map[cards[i]];
                int diff = abs(i - p.first + 1);
                if (diff < p.second)
                {
                    p.second = diff;
                }
                p.first = i;
                map[cards[i]] = p;
            }
            else
            {
                pair<int, int> p;
                p.first = i;
                p.second = 10e5 + 1;
                map[cards[i]] = p;
            }
        }

        int mn = 10e5 + 1;
        for (auto it : map)
        {
            mn = min(it.second.second, mn);
        }

        return (mn == 10e5 + 1 ? -1 : mn);
    }
};

int main()
{

    return 0;
}