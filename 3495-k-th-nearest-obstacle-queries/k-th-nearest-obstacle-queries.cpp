class Solution {
public:
    priority_queue<int> store;

    int calculate(int x, int k) {
        store.push(x);
                
        if (store.size() > k) {
            store.pop();
        }
        
        if (store.size() < k) {
            return -1;
        }

        return store.top();
    }

    vector<int> resultsArray(vector<vector<int>>& queries, int k) {
        vector<int> ans;
        
        for (int i = 0; i < queries.size(); i++) {
            int x = abs(queries[i][0]) + abs(queries[i][1]);
            int put = calculate(x, k);
            ans.push_back(put);
        }

        return ans;
    }
};
