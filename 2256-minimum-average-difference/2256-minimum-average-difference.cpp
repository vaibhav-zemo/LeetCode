class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n = nums.size();
        vector<long long> sum(n);
        sum[0] = nums[0];
        for(int i=1;i<n;i++){
            sum[i] = nums[i] + sum[i-1];
        }
        int mini = INT_MAX;
        int ans = 0;
        for(int i=0;i<n-1;i++){
            int temp = abs((sum[i]/(i+1)) - ((sum[n-1]-sum[i])/(n-i-1)));
            
            if(mini>temp){
                mini = temp;
                ans = i;
            }
        }
        if(mini>sum[n-1]/n) ans = n-1;
        return ans;
    }
};