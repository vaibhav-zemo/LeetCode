#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{

public:
    bool hasAllCodes(string s, int k) {
	
	if(k > s.size()) return false;
    
    set<string> res_set;
    
    for(int i =0;i<= s.size()-k;i++)
        res_set.insert(s.substr(i,k));
    
    return res_set.size() == pow(2,k);
}
};

int main()
{

    return 0;
}
