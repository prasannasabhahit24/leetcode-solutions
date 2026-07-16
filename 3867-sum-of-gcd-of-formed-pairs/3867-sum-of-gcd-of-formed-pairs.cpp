class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        int maxi = 0;
        vector<int> g(n);

        // Compute gcd with running maximum
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, nums[i]);
            g[i] = gcd(nums[i], maxi);
        }

        sort(g.begin(), g.end());

        long long ans = 0;

        // Pair smallest with largest
        for (int i = 0; i < n / 2; i++) {
            ans += gcd(g[i], g[n - 1 - i]);
        }

        return ans;
    }
};