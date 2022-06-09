#include <iostream>
#include <vector>
using namespace std;

class Solution
{

public:
    int fib(int n)
    {
        vector<int> vec(n + 1, -1);
        vec[0] = 0;
        vec[1] = 1;

        for (int i = 2; i < n + 1; i++)
        {
            vec[i] = vec[i - 1] + vec[i - 2];
        }
        return vec[n];
    }
};

int main()
{

    return 0;
}