class Solution {
public:
    int climbStairs(int n) {
           vector<int> dp(n + 1, -1);
 
        //Insert the values of base conditions
        dp[0] = 1;
        dp[1] = 1;
        
        //Iterate and update every index of dp array
        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        //Return the answer
        return dp[n];
    }
};