#include<iostream>

using namespace std;

int fibo(int n){
    int a=0;
    int b=1;

    for (int  i = 2; i < n; i++)
    {
        int next = a+b;
        a=b;
        b=next; 
    }
    return b;
    
}

int main(){
    int n ;
    cin>>n;
    cout<<n<<"th term is "<<fibo(n)<<endl;   
    return 0;
}