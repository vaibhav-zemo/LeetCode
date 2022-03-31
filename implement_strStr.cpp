#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int strStr(string haystack, string needle)
{
    if (needle == " ")
        return 0;
    if (haystack.find(needle) != string::npos)
        return haystack.find(needle);
    return -1;
}

int main()
{
    string st, t;
    cin >> st >> t;
    cout << strStr(st, t);
    return 0;
}