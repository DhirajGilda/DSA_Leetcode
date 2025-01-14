class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        unordered_set<int> seen; // To track the elements we've encountered
        vector<int> ans(n);     // Result array
        int commonCount = 0;    // To count common elements

        for (int i = 0; i < n; i++) {
            // Check for A[i] in seen set
            if (seen.count(A[i])) {
                commonCount++;
            } else {
                seen.insert(A[i]);
            }

            // Check for B[i] in seen set
            if (seen.count(B[i])) {
                commonCount++;
            } else {
                seen.insert(B[i]);
            }

            // Update the result for the current prefix
            ans[i] = commonCount;
        }

        return ans;
    }
};
