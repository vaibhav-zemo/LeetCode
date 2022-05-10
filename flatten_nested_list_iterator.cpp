#include <iostream>
#include <vector>
using namespace std;

class NestedInteger
{
public:
    bool isInteger() const;

    int getInteger() const;

    const vector<NestedInteger> &getList() const;
};

class NestedIterator
{
    vector<int> ans;
    int i = 0;

    void helper(vector<NestedInteger> nestedList)
    {
        for (int i = 0; i < nestedList.size(); i++)
        {
            if (nestedList[i].isInteger())
            {
                ans.push_back(nestedList[i].getInteger());
            }
            else
            {
                helper(nestedList[i].getList());
            }
        }
    }

public:
    NestedIterator(vector<NestedInteger> &nestedList)
    {
        helper(nestedList);
    }

    int next()
    {
        int temp = -1;
        temp = ans.at(i);
        i++;
        return temp;
    }

    bool hasNext()
    {
        if (i < ans.size())
        {
            return true;
        }
        return false;
    }
};

int main()
{

    return 0;
}