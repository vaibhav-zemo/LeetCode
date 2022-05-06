#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
    vector<string> num = {"", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

public:
    void helper(int n, vector<string> &ans, string st = "")
    {
        if (n <= 0)
        {
            ans.push_back(st);
            return;
        }

        int rem = n % 10;
        int length = num[rem - 1].size();
        for (int i = 0; i < length; i++)
        {
            helper(n / 10, ans, num[rem - 1][i] + st);
        }
    }

    vector<string> letterCombinations(string digits)
    {
        vector<string> ans;
        if (digits == "")
        {
            return ans;
        }
        helper(stoi(digits), ans, "");
        return ans;
    }
};

int main()
{

    return 0;
}