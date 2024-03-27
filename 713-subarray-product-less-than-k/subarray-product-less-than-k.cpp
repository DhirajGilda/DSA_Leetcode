class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int r=0;
        int l=0;
        int p=1;
        int ans=0;
        while(r<nums.size()){
            p=p*nums[r];
            while(p>=k){
                p=p/nums[l];
                l++;
            }
            ans+=(r-l+1);
            r++;
        }
        return ans;
    }
};