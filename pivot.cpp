#include <iostream>

using namespace std;

int getPivot(int arr[], int k)
{

    int s = 0;
    int e = k - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }return e;
}
int main()
{
    int arr[5]={3,8,1,17,10};
    cout<<"Pivot is "<<getPivot(arr, 5)<<endl;
    return 0;
}