#include <iostream>
#include <vector>
#include<queue>

class MedianFinder
{
private:
    std::priority_queue<int, std::vector<int>> left;
    std::priority_queue<int, std::vector<int>, std::greater<int>> right;
    void allocation()
    {
        if (left.size() > right.size() + 1)
        {
            int n = left.top();
            left.pop();
            right.push(n);
            allocation();
        }
        if (right.size() > left.size())
        {
            int n = right.top();
            right.pop();
            left.push(n);
            allocation();
        }
    }

public:
    MedianFinder()
    {
    }

    void addNum(int num)
    {
        int lm, rm;
        if (left.empty())
            lm = num - 1;
        else
            lm = left.top();
        if (right.empty())
            rm = num + 1;
        else
            rm = right.top();
        if (num > rm)
            right.push(num);
        else
            left.push(num);
        allocation();
    }

    double findMedian()
    {

        if ((left.size() + right.size()) % 2)
            return left.top();
        else
            return (double((left.top() + right.top()))) / 2;
    }
};

int main()
{

    return 0;
}