#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        vector<int> v1(26),v2(26);
        for(char ch:s1){
            v1[ch-'a']++;
        }

        for(char ch:s2){
            v2[ch-'a']++;
        }

        for(char ch:s3){
            
        }
    }
};

int main()
{

    return 0;
}