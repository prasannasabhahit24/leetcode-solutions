class Solution {
public:
    string stoneGameIII(vector<int>& s) {
        int n = s.size();

        int a = 0, b = 0, c = 0;

        for (int i = n - 1; i >= 0; i--) {
            int res = INT_MIN;

            // Take 1 stone
            res = max(res, s[i] - a);

            // Take 2 stones
            if (i + 1 < n) {
                res = max(res, s[i] + s[i + 1] - b);
            }

            // Take 3 stones
            if (i + 2 < n) {
                res = max(res, s[i] + s[i + 1] + s[i + 2] - c);
            }

            // Shift DP values
            c = b;
            b = a;
            a = res;
        }

        int diff = a;

        if (diff > 0)
            return "Alice";
        else if (diff < 0)
            return "Bob";
        else
            return "Tie";
    }
};