#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

class WordFilter
{
    unordered_map<string, int> map;
public:
    WordFilter(vector<string> &words)
    {
        for (int i = 0; i < words.size(); i++)
        {
            string p = "";
            for (int j = 0; j < words[i].size(); j++)
            {
                p += words[i][j];

                string q = "";
                for (int k = words[i].size() - 1; k >= 0; k--)
                {
                    q = words[i][k] + q;
                    map[p + "|" + q] = i + 1;
                }
            }
        }
    }

    int f(string prefix, string suffix)
    {
        return map[prefix + "|" + suffix] - 1;
    }
};

int main()
{

    return 0;
}