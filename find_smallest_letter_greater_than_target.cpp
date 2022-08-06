#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        int n = letters.size();
        int st = 0, end = n - 1;
        while (st <= end)
        {
            int mid = st + (end - st) / 2;
            if (letters[mid] > target)
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        if (letters[st]>target)
        {
            return letters[st];
        }
        return letters[0];
    }
};

int main()
{

    return 0;
}