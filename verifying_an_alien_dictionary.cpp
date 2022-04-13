#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool isAlienSorted(vector<string> &words, string order)
    {
        unordered_map<char, int> map;
        for (int i = 0; i < order.size(); i++)
        {
            map[order[i]] = i;
        }

        bool ans = true;
        for (int i = 1; i < words.size(); i++)
        {
            bool temp = false;
            string s1 = words[i], s2 = words[i - 1];
            int j = 0, k = 0;
            while (j < s1.length() && k < s2.length())
            {
                if (map[s1[j]] > map[s2[k]])
                {
                    temp = true;
                    break;
                }
                else if (map[s1[j]] < map[s2[k]])
                {
                    return false;
                }
                j++, k++;
            }

            int check1 = s1.length() - j;
            int check2 = s2.length() - k;

            if (check1 > check2 && !temp)
            {
                return false;
            }
        }
        return ans;
    }
};

int main()
{

    return 0;
}