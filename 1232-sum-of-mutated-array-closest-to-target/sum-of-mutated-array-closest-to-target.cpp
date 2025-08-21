class Solution {
public:
    int findBestValue(vector<int>& arr, int target) {
        int l = 0, r = *max_element(arr.begin(), arr.end());
        int ans = -1, diff = INT_MAX;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            int sum = 0;
            for (int x : arr) {
                sum += min(x, mid);
            }

            int curDiff = abs(sum - target);
            if (curDiff < diff || (curDiff == diff && mid < ans)) {
                ans = mid;
                diff = curDiff;
            }

            if (sum < target) l = mid + 1;
            else r = mid - 1;
        }
        return ans;
    }
};
