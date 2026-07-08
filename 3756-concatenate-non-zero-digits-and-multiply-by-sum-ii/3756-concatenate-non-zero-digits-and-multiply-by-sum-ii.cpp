class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {

        int n = s.size();

        const int MOD = 1000000007;

        vector<long long> sum(n + 1);
        vector<long long> nonzero(n + 1);
        vector<long long> val(n + 1);
        vector<long long> p10(n + 1);

        p10[0] = 1;

        for (int i = 0; i < n; i++) {

            int d = s[i] - '0';

            sum[i + 1] = sum[i] + d;

            nonzero[i + 1] = nonzero[i] + (d != 0);

            val[i + 1] = val[i];

            if (d != 0) {
                val[i + 1] = (val[i + 1] * 10 + d) % MOD;
            }

            p10[i + 1] = (p10[i] * 10) % MOD;
        }

        vector<int> ans;

        for (auto &q : queries) {

            int l = q[0];
            int r = q[1];

            long long c = nonzero[r + 1] - nonzero[l];

            long long x = (val[r + 1] - val[l] * p10[c]) % MOD;

            if (x < 0)
                x += MOD;

            long long ssum = sum[r + 1] - sum[l];

            ans.push_back((x * ssum) % MOD);
        }

        return ans;
    }
};