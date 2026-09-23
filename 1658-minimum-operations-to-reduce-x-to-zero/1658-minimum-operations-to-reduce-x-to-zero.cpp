class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int  s=0;

        for(int i=0;i<n;i++){
            s+=nums[i];
        }

        int l=0;
        int r=0;
        int ans=-1;
        int sum=0;

        int diff=s-x;

    
        if (diff < 0) return -1;


        if (diff == 0) return n;


        while(r<n){
            sum+=nums[r];
            while(sum > diff){
                sum-=nums[l];
                l++;
            }
           if(sum==diff){
            ans=max(ans,r-l+1);}

          r++;
        }
        if(ans==-1) return -1;
        return n-ans;

    }
};