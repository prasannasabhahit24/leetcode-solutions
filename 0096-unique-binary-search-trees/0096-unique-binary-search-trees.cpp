class Solution {
    
        int dp[20][20];

    int solve(int s,int e){
        int ans=0;

         if(s>e){
            return 1;
        }
        if(dp[s][e] != -1){
            return dp[s][e];
        }
        for(int i=s;i<=e;i++){
            

            int left=solve(s,i-1);
            int right=solve(i+1,e);


            ans+=left*right;
            
        }
       return dp[s][e]=ans;
    }
public:
    int numTrees(int n) {
       memset(dp,-1,sizeof(dp));

        return solve(1,n);
        
    }
};