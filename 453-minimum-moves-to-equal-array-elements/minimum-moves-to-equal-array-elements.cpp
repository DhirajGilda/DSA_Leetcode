class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int minNumber=INT_MAX;
        for(auto i:nums){
            minNumber=min(minNumber,i);
        }
        int ans=0;
        for(auto i:nums){
            ans+=i-minNumber;
        }
        return ans;
    }
};