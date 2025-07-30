class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int units = 0;
        for (auto u : left)
            units = max(units, u);
        for (auto u : right)
            units = max(units, n - u);        
        return units;
    }
};