class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        int n = nums.size();
        long long ans = static_cast<long long>(n) * (n - 1) / 2;
        unordered_map<int, int> mp;
        
        for (int i = 0; i < n; ++i) {
            int key = i - nums[i];
            mp[key]++;
        }
        
        for (auto& entry : mp) {
            long long count = entry.second;
            ans -= count * (count - 1) / 2;
        }
        
        return ans;
    }
};