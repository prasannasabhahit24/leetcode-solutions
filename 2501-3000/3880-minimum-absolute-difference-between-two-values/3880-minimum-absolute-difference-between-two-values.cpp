class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int mini=INT_MAX;
        int n=nums.size();
          int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if((nums[i]==1 && nums[j]==2)||
                    (nums[i]==2 &&nums[j]==1)){
                     ans=abs(i-j);
                    mini=min(mini,ans);
                }
            }
           
        }
        if(mini==INT_MAX) return -1;
         return mini;
    }
};