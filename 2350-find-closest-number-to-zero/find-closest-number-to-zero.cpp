class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int distance=abs(nums[i])-0;
            if(distance<=abs(ans)){
                if(abs(nums[i])==ans && ans>0) continue;
                ans=nums[i];
                if(nums[i]>0){
                    ans=nums[i];
                }
            }
        }
        return ans;
    }
};