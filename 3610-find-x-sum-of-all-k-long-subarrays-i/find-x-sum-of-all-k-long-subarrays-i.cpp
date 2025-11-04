class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n = nums.size();
        int outputArraySize = n - k + 1;
        vector<int> ans;

        for (int i = 0; i < outputArraySize; i++) {
            unordered_map<int, int> freq;
            for (int j = i; j < i + k; j++) {
                freq[nums[j]]++;
            }
            priority_queue<pair<int,int>> pq; 
            for (auto &p : freq) {
                pq.push({p.second, p.first});
            }

            int sum = 0;
            for (int j = 0; j < x && !pq.empty(); j++) {
                auto top = pq.top();
                pq.pop();
                sum += top.first * top.second;
            }

            ans.push_back(sum);
        }

        return ans;
    }
};
