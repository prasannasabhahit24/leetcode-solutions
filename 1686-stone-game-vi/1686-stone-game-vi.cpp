class Solution {
public:
    int stoneGameVI(vector<int>& aliceValues, vector<int>& bobValues) {
         int n = aliceValues.size();

        vector<pair<int,int>> stones;

        for(int i = 0; i < n; i++) {
            stones.push_back({
                aliceValues[i] + bobValues[i],
                i
            });
        }

        sort(stones.rbegin(), stones.rend());

        int alice = 0;
        int bob = 0;

        for(int i = 0; i < n; i++) {
            int index = stones[i].second;

            if(i % 2 == 0)
                alice += aliceValues[index];
            else
                bob += bobValues[index];
        }

        if(alice > bob)
            return 1;
        else if(alice < bob)
            return -1;
        else
            return 0;
    }
};