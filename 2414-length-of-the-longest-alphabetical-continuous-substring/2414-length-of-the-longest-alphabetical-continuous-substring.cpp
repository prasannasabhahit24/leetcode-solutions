class Solution {
public:
    int longestContinuousSubstring(string s) {
        int n=s.length();
        int ans=1;
       
        int currlen=1;

        for(int i=1;i<n;i++){
            if(s[i]-s[i-1]==1){
                currlen++;
                ans=max(ans,currlen);
            }
            else {
                currlen=1;
            }
        }

        return ans;
    }
};