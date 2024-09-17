class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string>ans;
        unordered_map<string,int>mp;

        stringstream ss1(s1);
        string word;
        while (ss1 >> word) {
            mp[word]++;
        }

        stringstream ss2(s2);
        while (ss2 >> word) {
            mp[word]++;
        }

        for (auto& entry : mp) {
            if (entry.second == 1) {
                ans.push_back(entry.first);
            }
        }

        return ans;
    }
};