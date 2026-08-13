class Solution {
    // private:

    // int solve(string &s,int i,int j){
    //     if(i>j){
    //         return 0;
    //     }

    //     if(i==j){
    //         return 1;  //only 1 char in string
    //     }

    //     if(s[i]==s[j]){
    //         return 2+solve(s,i+1,j-1);
    //     }
    //     else {
    //         return max(solve(s,i+1,j),solve(s,i,j-1));  //skip roght or left
    //     }   tc(o(2^n)) and sc-o(N)
    // }
public:
    int longestPalindromeSubseq(string s) {
        int n=s.length();

        vector<vector<int>> dp(n,vector<int>(n,0));

        for(int i=n-1;i>=0;i--){
            dp[i][i]=1;
            for(int j=i+1;j<n;j++){

                if(s[i]==s[j]){
                    dp[i][j]=2+dp[i+1][j-1];
                }

                 else {

                    // Skip the left character OR
                    // Skip the right character
                    // Take whichever gives the larger LPS
                    dp[i][j] = max(dp[i + 1][j],
                                   dp[i][j - 1]);
                }
            }
        }
        return dp[0][n-1];
    }  
};