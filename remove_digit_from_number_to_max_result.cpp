#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string removeDigit(string number, char digit)
    {
        int cnt = 0;
        for (char ch : number)
        {
            if (ch == digit)
            {
                cnt++;
            }
        }

        int pos = 0;
        for (int i = 0; i < number.size(); i++)
        {
            if (number[i] == digit)
            {
                if (cnt == 1)
                {
                    pos = i;
                    break;
                }
                else if (number[i] < number[i + 1])
                {
                    pos = i;
                    break;
                }
                cnt--;
            }
        }

        number.erase(number.begin()+pos);
        return number;
    }
};

int main()
{

    return 0;
}