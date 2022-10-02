#include <iostream>

using namespace std;
string moveallx(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = moveallx(s.substr(1));
    if (ch == 'x')
    {
        return ans + ch;
    }
    else
        return ch + ans;
}
int main()
{
    string s;
    cin >> s;
    moveallx(s);
    cout << moveallx(s);
    return 0;
}