#include<iostream>

using namespace std;
int func(int n){
    return (n*(n+1))/2;
}
int main(){
    int a;
    cout<<"enter a number"<<endl;
    cin>>a;
   cout<< func(a)<<endl;

    return 0;
}