class Solution {
public:
    int maxSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    if(nums[nums.size()-1]<=0){
        return nums[nums.size()-1];
    }
    unordered_map<int,int>mp;
    int ans=0;
    for(auto i:nums){
        mp[i]++;
    }

    for(auto i:mp){
        if(i.first>=0){
            ans+=i.first;
        }
    }
    return ans;
    }
};