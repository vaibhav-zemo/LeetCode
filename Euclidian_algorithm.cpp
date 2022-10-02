#include <iostream>

using namespace std;
int gcd(int a, int b)
{
    // while (a != b)
    // {
    //     if (a > b)
    //     {
    //         a = a - b;
    //     }
    //     else
    //         b = b - a;
    // }
    // return a;

    // second approach


    if (b==0)
    {
        return a;
    }else
    return gcd(b,a%b);
    
}
int main()
{
    int a,b;
    cout<<"enter a and b"<<endl;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}