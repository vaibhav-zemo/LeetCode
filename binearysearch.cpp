#include <iostream>

using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;
    // int mid =(start+end)/2;
    int mid = (start + (end - start) / 2);

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
         mid = (start + (end - start) / 2);
        // mid = (start+end)/2;
    }
    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    int oddindex = binarySearch(odd, 5, 14);
    cout << "oddIndex  is " << oddindex << endl;

    int evenindex = binarySearch(even,6,6);
    cout<<"evenIndex  is " << evenindex <<endl;

    return 0;
}