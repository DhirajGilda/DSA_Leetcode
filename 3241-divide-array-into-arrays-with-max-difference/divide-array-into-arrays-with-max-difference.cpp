class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>>ans;
        vector<vector<int>>ansone;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        bool check=false;

        for(int i=n-1;i>=0;i=i-3){
            vector<int>add;
            if(nums[i]-nums[i-2]<=k){
                add.push_back(nums[i]);
                add.push_back(nums[i-1]);
                add.push_back(nums[i-2]);
            }
            else{
                check=true;
                break;
            }
            ans.push_back(add);
        }
        if(check==true){
            return ansone;
        }
        else{
            return ans;
        }
    }
};