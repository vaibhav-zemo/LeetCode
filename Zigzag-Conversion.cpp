class Solution {
public:
    string convert(string s, int n) {
        if (n == 1)
        return s;
        vector<string> a(n);     
        int j = 0;
        bool flg = 0;
        for (int i = 0 ; i < s.size() ; i++)
        {
            if (j == 0)
            {
                a[j].push_back(s[i]);
                j++;
                flg = 0;
            }
            else if (j == n-1)
            {
                a[j].push_back(s[i]);
                j--;
                flg=1;
            }
            else{
                a[j].push_back(s[i]);
                if (flg == 0)
                j++;
                else
                j--;
            }
        }
        for (int i = 1 ; i < n ; i++)
        {
            a[0].append(a[i]);   
        }
        return a[0];
    }
};
