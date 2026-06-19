class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans=0;
        int res=0;
        int n=gain.size();
        for(int i=0;i<n;i++){
         res+=gain[i];
            ans=max(ans,res);
        }
        return ans;
    }
};