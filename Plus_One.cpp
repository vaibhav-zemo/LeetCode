#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    vector<int> cp = digits;
    int lastIndex = digits.size() - 1;
    int last = digits[lastIndex];
    for (int i = lastIndex; i >= 0; i--)
    {
        if (lastIndex == 0 && last == 9)
        {
            digits[lastIndex] = 0;
            digits.insert(digits.begin(),1);
        }
        if (last < 9)
        {
            digits[i]++;
            break;
        }
        else
        {
            digits[i] = 0;
        }
        last = digits[i];
    }

    return digits;
}

int main()
{
    

    return 0;
}