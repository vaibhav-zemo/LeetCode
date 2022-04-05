#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

class RandomizedCollection {
public:
    unordered_map<int,set<int>> um;
    vector<int> v;
    int size;
    RandomizedCollection() {
        v.resize(100005,-1);
        size=0;
    }
    
    bool insert(int val) {
        bool flag;
        if(um.count(val))
            flag=false;
        else
            flag=true;
        um[val].insert(size);
        v[size] = val;
        size++;
        return flag;
    }
    
    bool remove(int val) {
        if(um.count(val) == 0)
            return false;
        auto it = um[val].end();
        --it;
        int x = *it;
        um[val].erase(it);
        if(um[val].size() == 0)
            um.erase(val);
        if(size == 1 || x == size-1)
        {
            size--;
            v[x] = -1;
            return true;
        }
        v[x] = v[size-1];
        it = um[v[size-1]].end();
        --it;
        um[v[size-1]].erase(it);
        um[v[size-1]].insert(x);
        v[size-1]=-1;
        size--;
        return true;
    }
    
    int getRandom() {
        return v[rand()%size];
    }};

int main()
{

    return 0;
}