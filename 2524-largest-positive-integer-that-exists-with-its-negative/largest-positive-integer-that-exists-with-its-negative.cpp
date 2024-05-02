class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i :nums){
            mp[i]++;
        }
        int maxi=0;
        for(auto i:nums){
            if(i<0){
                if(mp.find(abs(i))!=mp.end()){
                    maxi=max(maxi,abs(i));
                }
            }
        }
        if(maxi==0){
            return -1;
        }
        else{
            return maxi;
        }
    }

};