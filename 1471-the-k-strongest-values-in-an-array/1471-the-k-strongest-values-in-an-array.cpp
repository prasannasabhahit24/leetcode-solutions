class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        int n = arr.size();
        sort(arr.begin(), arr.end());

        int mid = (n - 1) / 2;
        vector<int> ans;

        int l = 0;
        int r = n - 1;

        for (int i = 0; i < k; i++) {

            if (abs(arr[l] - arr[mid]) > abs(arr[r] - arr[mid])) {
                ans.push_back(arr[l]);
                l++;
            }
            else {
                // If equal, choose the larger element arr[r]
                ans.push_back(arr[r]);
                r--;
            }
        }

        sort(ans.rbegin(), ans.rend());
        return ans;
    }
};