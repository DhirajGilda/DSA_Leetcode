class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=(n*(n+1))/2;
        int calculatedSum=0;
        for(auto i:nums){
            calculatedSum+=i;
        }
        return sum-calculatedSum;



    }
};