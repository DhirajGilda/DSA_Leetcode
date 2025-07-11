class Solution {
public:
    int f(int ind,vector<int>& nums,vector<int> &dp)
    {
        if(ind==0) return nums[ind];
        if(ind<0) return 0;
        if(dp[ind]!=-1) return dp[ind];
        //pick
        int pick = nums[ind]+f(ind-2,nums,dp);
        //notpick
        int notpick=0+f(ind-1,nums,dp);

        return dp[ind]=max(pick,notpick);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        int ans=f(n-1,nums,dp);
        return ans;

        
    }
};