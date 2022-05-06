#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Job
{
    int id;     // Job Id
    int dead;   // Deadline of job
    int profit; // Profit if job is over before or on deadline
};

static bool cmp(Job a, Job b)
{
    int r1 = a.dead;
    int r2 = b.dead;
    return r1 > r2;
}

vector<int> JobScheduling(Job arr[], int n)
{
    // your code here
    vector<int> ans;
    int cnt = 0, temp = 0;
    sort(arr, arr + n, cmp);

    int deadline = arr[0].dead;
    int i = 0;
    while (deadline)
    {
        temp += arr[i].profit;
        cnt++;
        if (deadline > arr[i].dead)
        {
            deadline = arr[i].dead;
        }
        deadline--;
        i++;
    }
    ans[0] = cnt;
    ans[1] = temp;
    return ans;
}

int main()
{

    return 0;
}