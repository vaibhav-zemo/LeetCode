#include <iostream>
#include <vector>
using namespace std;

void heapSort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int child = i;
        while (child > 0)
        {
            int parent = (child - 1) / 2;
            if (arr[child] < arr[parent])
            {
                swap(arr[child], arr[parent]);
            }

            child = parent;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    heapSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}