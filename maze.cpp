#include<iostream>

using namespace std;
int countpathmaze(int n, int x, int y){
    if (x==n-1 && y==n-1)
    {
        return 1;
    }
    if (x>n || y>n)
    {
        return 0;
    }
    
    return countpathmaze(n,x+1,y) + countpathmaze(n,x,y+1);
    
}
int main(){
    cout<<countpathmaze(3,0,0);
    return 0;
}