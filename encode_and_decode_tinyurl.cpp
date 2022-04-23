#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
    vector<string> v;
    void store(int key, string st)
    {
        v.resize(10);
        v[key] = st;
    }

    int hashf(string st)
    {
        int hashcode = 0;
        int coeff = 1;
        for (int i = st.length() - 1; i >= 0; i--)
        {
            hashcode += st[i] * coeff;
            hashcode %= 8;
            coeff *= 53;
            coeff %= 8;
        }
        return hashcode % 8;
    }

public:
    string encode(string longUrl)
    {
        int index = hashf(longUrl);
        store(index, longUrl);

        string st = "";
        st += "http://tinyurl.com/" + to_string(index);
        return st;
    }

    string decode(string shortUrl)
    {
        string st = shortUrl.substr(19);
        int index = stoi(st);
        string ans = v[index];
        return ans;
    }
};

int main()
{

    return 0;
}