#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class TimeMap
{
    using time_val = pair<int, string>;
    unordered_map<string, vector<time_val>> m1;

public:
    TimeMap()
    {
    }

    void set(string key, string value, int timestamp)
    {
        m1[key].push_back({timestamp, value});
    }

    string get(string key, int timestamp)
    {
        if (m1.count(key) != 0)
        {
            auto it = upper_bound(m1[key].begin(), m1[key].end(),
                                  timestamp,
                                  [](int val, const auto &p1)
                                  { return val < p1.first; });

            if (it != m1[key].begin())
                return (--it)->second;
            else
                return "";
        }
        else
            return "";
    }
};

int main()
{

    return 0;
}