class Solution {
public:
    int stoneGameVIII(vector<int>& stones) {
        
        int n=stones.size();
       
        for(int i=1;i<n;i++){
            stones[i]+=stones[i-1];
        }


        int ans=stones[n-1];


        for(int i=n-2;i>=1;i--){  //i>=1 because player shld hoose 2 stones
            ans=max(ans,stones[i]-ans);
        }

        return ans;
    }
};