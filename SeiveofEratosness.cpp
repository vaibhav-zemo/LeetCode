#include<iostream>

using namespace std;
 bool isPrime(int j)
    {
        if (j == 1)
            return false;
        if (j == 2 || j == 3)
            return true;
        if (j % 2 == 0 || j % 3 == 0)
            return false;
        for (int i = 5; i * i <= j; i = i + 6)
        {
            if (j % i == 0 || j % (i + 2) == 0)
            return false;
        }
        return true;
    }

    void PrintPrimes(int n){
        for (int j =2; j <=n; j++)
        {
            if(isPrime(j))
            cout<<j<<endl;
        }
        
    }
int main(){
    int n;
    cout << "enter the number" << endl;
    cin >> n;
     PrintPrimes(n);
    return 0;
}