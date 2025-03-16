class Solution {
public:
    int maxSum(vector<int>& nums) {
    // sort(nums.begin(),nums.end());
    // if(nums[nums.size()-1]<=0){
    //     return nums[nums.size()-1];
    // }
    unordered_map<int,int>mp;
    int ans=0;
    int negAns=INT_MIN;
    for(auto i:nums){
        mp[i]++;
    }

    for(auto i:mp){
        if(i.first>0){
            ans+=i.first;
        }
        else{
            if(i.first>negAns){
                negAns=i.first;
            }
        }
    }
    cout<<ans;
    if(ans){
        return ans;
    }
    return negAns;
    }
};