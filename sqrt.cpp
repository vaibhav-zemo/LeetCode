#include<iostream>

using namespace std;
long long int sqrtInteger(int n){
    int s=0;
    int e=n;
    long long mid= s +(e-s)/2;

    long long int ans=-1;
    while(e<=s){
        long long int square = mid * mid;

        if(square== mid)
        return mid;
        if(square<n){
            ans= mid;
            s=mid+1;
        }else{
            e=mid-1;
        }mid= s +(e-s)/2;
    }return ans;
}



double morePrecision(int n, int precision,int tempsol){
    double factor = 1;
    double ans = tempsol;

    for (int  i = 0; i < precision; i++)
    {
        factor = factor/10;
         for (double  j = 0; j*j<n ; j=j+factor)
         {
            ans = j;
         }
         
    }return ans;
    

}
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    int tempsol = sqrtInteger(n);

    cout<<"Answer is " <<morePrecision(n,3,tempsol);

    
    return 0;
}