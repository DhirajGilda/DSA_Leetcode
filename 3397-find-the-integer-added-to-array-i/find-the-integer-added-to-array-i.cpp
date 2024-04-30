class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int sumNumsOne=0;
        int sumNumsTwo=0;
        int n=nums1.size();

        for(auto i:nums1){
            sumNumsOne+=i;
        }
        for(auto i :nums2){
            sumNumsTwo+=i;
        }

        int diff=abs(sumNumsOne-sumNumsTwo);
        int ans=diff/n;
        if(sumNumsOne>sumNumsTwo){
            ans=-ans;
        }
        return  ans;
    }
};