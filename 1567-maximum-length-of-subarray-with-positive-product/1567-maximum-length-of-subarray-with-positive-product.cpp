class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int n=nums.size();
        int maxlen=0;
        int l=0;
        int r=0;
        int cnt=0;
        int first=0;

        while(r<n){
            if(nums[r]==0){
                cnt=0;
                l=r+1;
            }
            else{
                if(nums[r]<0){
                    cnt++;

                    if(cnt==1){
                        first=r;
                    }
                }

                if(cnt%2==0){
                    maxlen=max(maxlen,r-l+1);
                }
                else{
                    maxlen=max(maxlen,r-first);
                }
            }

            r++;
        }

        return maxlen;
    }
};