#include <vector>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        int n = s.size();
        
        // Create a set for faster dictionary lookups
        unordered_set<string> dict(dictionary.begin(), dictionary.end());

        // DP array to store minimum extra characters from index i to the end
        vector<int> dp(n + 1, 0);

        // Start filling the dp array from the end of the string
        for (int i = n - 1; i >= 0; i--) {
            // By default, assume one extra character if no match found
            dp[i] = dp[i + 1] + 1;

            // Try matching every word in the dictionary
            for (const string& word : dictionary) {
                int wordLen = word.size();

                // Check if the substring starting at i matches this dictionary word
                if (i + wordLen <= n && s.substr(i, wordLen) == word) {
                    dp[i] = min(dp[i], dp[i + wordLen]);
                }
            }
        }

        // Return the minimum extra characters from index 0
        return dp[0];
    }
};
