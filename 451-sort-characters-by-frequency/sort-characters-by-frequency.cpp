class Solution {
public:
    string frequencySort(string s) {
        string ans = "";
        priority_queue<pair<int, char>> pq;
        unordered_map<char, int> mp;

        for (char c : s) {
            mp[c]++;
        }

        for (auto it : mp) {
            pq.push({it.second, it.first});
        }

        while (!pq.empty()) {
            auto [freq, ch] = pq.top();
            pq.pop();
            ans.append(freq, ch);
        }

        return ans;
    }
};