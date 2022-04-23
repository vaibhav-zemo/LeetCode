#include <iostream>
#include <vector>
#include <set>
using namespace std;

class MyHashSet
{
    set<int> s;

public:
    MyHashSet()
    {
    }

    void add(int key)
    {
        s.insert(key);
    }

    void remove(int key)
    {
        s.erase(key);
    }

    bool contains(int key)
    {
        auto it = s.find(key);
        if (it != s.end())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{

    return 0;
}