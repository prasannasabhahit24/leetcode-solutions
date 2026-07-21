class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {

        vector<int> zeroBlocks;   // Stores length of each zero block
        int totalOnes = 0;

        int i = 0;
        int n = s.size();

        while (i < n) {

            // Count consecutive 1's
            if (s[i] == '1') {
                while (i < n && s[i] == '1') {
                    totalOnes++;
                    i++;
                }
            }
            // Count consecutive 0's
            else {
                int cnt = 0;

                while (i < n && s[i] == '0') {
                    cnt++;
                    i++;
                }

                zeroBlocks.push_back(cnt);
            }
        }

        int maxMerge = 0;

        // Find maximum sum of two adjacent zero blocks
        for (int i = 0; i + 1 < zeroBlocks.size(); i++) {
            maxMerge = max(maxMerge, zeroBlocks[i] + zeroBlocks[i + 1]);
        }

        return totalOnes + maxMerge;
    }
};