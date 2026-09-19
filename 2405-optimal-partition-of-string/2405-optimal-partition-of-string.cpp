class Solution {
public:
    int partitionString(string s) {

        vector<int> seen(26, 0);
        int ans = 1;

        for (char c : s) {

            if (seen[c - 'a']) {
                ans++;
                fill(seen.begin(), seen.end(), 0);
            }

            seen[c - 'a'] = 1;
        }

        return ans;
    }
};