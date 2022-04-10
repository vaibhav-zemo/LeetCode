#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int calPoints(vector<string> &ops)
{
    vector<int> ans(1001);
    int k = 0;
    for (int i = 0; i < ops.size(); i++)
    {
        if (ops[i] == "+")
        {
            ans[k] = (ans[k - 1] + ans[k - 2]);
            cout<<ans[k]<<endl;
            k++;
        }
        else if (ops[i] == "C")
        {
            k--;
        }
        else if (ops[i] == "D")
        {
            ans[k] = 2 * ans[k - 1];
            cout<<ans[k]<<endl;
            k++;
        }
        else
        {
            ans[k] = stoi(ops[i]);
            cout<<ans[k]<<endl;
            k++;
        }
    }
    int sum = 0;
    for (int i = 0;i<k;i++)
    {
        cout<<ans[i]<<" ";
        sum += ans[i];
    }
    cout<<endl;
    return sum;
}

int main()
{
    vector<string> v = {"36","28","70","65","C","+","33","-46","84","C"};
    cout<<calPoints(v);
    return 0;
}