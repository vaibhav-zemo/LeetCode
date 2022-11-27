class Solution
{
    public:
        int countSubarrays(vector<int> &nums, int k)
        {
            map<int, int> mp;
            mp[0] = 1;

            long long n = nums.size(), ans = 0, sum = 0;
            bool found = false;

            for (int i = 0; i < n; i++)
            {                
                if (nums[i] > k) sum++;
                else if (nums[i] < k) sum--;
                else found = 1;
                

                if (found)
                {
                    ans += mp[sum] + mp[sum - 1];
                }
                else
                {
                    mp[sum]++;
                }
            }
            
            return (int)ans;
        }
};