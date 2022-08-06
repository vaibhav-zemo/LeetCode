#include <iostream>
#include <vector>
#include<map>
#include <algorithm>
using namespace std;


int main()
{
    map<int,int> mp;
    mp[1] = 2;
    for(auto it: mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}