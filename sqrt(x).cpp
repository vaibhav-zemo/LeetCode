#include <iostream>
#include <string>
#include <vector>
#include<math.h>
#include <algorithm>
using namespace std;

int mySqrt(int x)
{
    return pow(x,0.5);
}

int main()
{
    int n;
    cin>>n;
    cout<<mySqrt(n)<<endl;
    return 0;
}