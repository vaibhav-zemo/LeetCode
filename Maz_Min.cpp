#include <iostream>
// #include <bits/stdc++.h>
// #include<math.h>
#include <climits>

using namespace std;

int getmin(int arr[], int n)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini,arr[i]);
        // if (arr[i] < min)
        // {
        //     min = arr[i];
        // }
    }
    return mini;
}

int getmax(int arr[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi,arr[i]);
        // if (arr[i] > max)
        // {
        //     max = arr[i];
        // }
    }
    return maxi;
}

int main()
{
    int size;
    cin >> size;

    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "The max value is " << getmax(arr, size) << endl;
    cout << "The min value is " << getmin(arr, size) << endl;

    return 0;
}