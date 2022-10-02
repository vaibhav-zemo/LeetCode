#include<iostream>

using namespace std;

int Ap(int n){
    return  (3 * n) + 7;
}

int main(){
    int n;
    cin>>n;
    cout<<"Answer is "<<Ap(n);
    return 0;
}