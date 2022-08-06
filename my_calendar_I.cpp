#include <iostream>
#include <vector>
#include<map>
#include <algorithm>
using namespace std;

class MyCalendar
{
    map<int, int> mp;

public:
    MyCalendar()
    {
    }
    bool book(int start, int end)
    {

        auto itr = mp.upper_bound(start);
        if (itr == mp.end() || end <= itr->second)
        {
            mp[end] = start;
            return true;
        }
        else
            return false;
    }
};

int main()
{

    return 0;
}