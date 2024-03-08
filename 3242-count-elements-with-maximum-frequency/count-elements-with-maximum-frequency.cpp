class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        int cnt=0;
        int maxFrequency=0;
        for (auto i : mp) {
                if (i.second > maxFrequency) {
                    maxFrequency = i.second;
                    cnt = 1;
                } else if (i.second == maxFrequency) {
                    cnt++;
                }
            }
            return cnt * maxFrequency;
    }
};