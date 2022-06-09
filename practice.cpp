#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string st = "Vaibhav";
    int i = 0, j = st.size() - 1;
    cout<<st.substr(0,0)<<endl;
    while (i <= j)
    {
        cout << st.substr(i, j) << endl;
        j--;
    }

    return 0;
}