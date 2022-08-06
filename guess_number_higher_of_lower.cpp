#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
    int guess(int num);

public:
    int guessNumber(int n)
    {
        int st = 1, end = 10;
        while (st <= end)
        {
            int mid = (end - st) / 2 + st;
            if (guess(mid) == 0)
            {
                return mid;
            }
            else if (guess(mid) == -1)
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        return -1;
    }
};

int main()
{

    return 0;
}