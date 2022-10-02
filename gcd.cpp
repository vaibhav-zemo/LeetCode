#include<iostream>

using namespace std;
int gcd (int a, int b){
    int res =min(a,b);
    while (res>0)
    {
        if (a%res==0 && b%res==0)
        {
            break;
        }
        res--;
    }
    return res;
}
int main(){
    int a,b;
    cout<<"enter a and b"<<endl;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}