class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

       vector<int> ans;
        unordered_map<int, int> mp;
        
        // Count frequencies of numbers
        for (auto i : nums) {
            mp[i]++;
        }
        
        // Define a custom comparator for the priority_queue
        auto cmp = [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second < b.second; // Compare based on frequency
        };
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> pq(cmp);
        
        // Push elements with their frequencies into the priority_queue
        for (auto& [key, value] : mp) {
            pq.push({key, value});
        }
        
        // Extract elements from the priority_queue
        while (!pq.empty() && k > 0) {
            ans.push_back(pq.top().first);
            pq.pop();
            k--;
        }
        
        return ans;
    }

        
};