#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class person
{
public:
    string name;
    int time;
    int amount;
    string city;

    person(string name, int time, int amount, string city)
    {
        this->amount = amount;
        this->city = city;
        this->name = name;
        this->time = time;
    }
};

class Solution
{
public:
    int integ(string st)
    {
        int ans = 0;
        for (int i = 0; i < st.size(); i++)
        {
            ans = ans * 10 + st[i] - '0';
        }
        return ans;
    }

    vector<string> invalidTransactions(vector<string> &transactions)
    {
        int l = transactions.size();
        vector<person> v;
        for (int i = 0; i < l; i++)
        {
            int cnt = 0;
            string name, time, amount, st = "";
            int j;
            for (j = 0; j < transactions[i].size(); j++)
            {
                if (transactions[i][j] == ',')
                {
                    if (cnt == 0)
                    {
                        name = st;
                    }
                    else if (cnt == 1)
                    {
                        time = st;
                    }
                    else if (cnt == 2)
                    {
                        amount = st;
                        break;
                    }
                    st = "";
                    cnt++;
                }
                else
                {
                    st += transactions[i][j];
                }
            }
            string city = "";
            j++;
            while (j < transactions[i].size())
            {
                city += transactions[i][j];
                j++;
            }

            person p(name, integ(time), integ(amount), city);
            v.push_back(p);
        }

        vector<string> ans;
        unordered_map<person, int>;
        for (auto it : v)
        {
            if (it.amount > 1000)
            {
                ans.push_back(it.name + ',' + to_string(it.time) + ',' + to_string(it.amount) + ',' + it.city);
            }
        }
    }
};

int main()
{

    return 0;
}