class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int maxlen=0;
        int cntzero=0;

        int l=0;
        int r=0;
        while(r<n){
            if(nums[r]==0){
                cntzero++;
            }

            while(cntzero>1){
                if(nums[l]==0){
                    cntzero--;
                }
                l++;
            }
            maxlen=max(maxlen,r-l);
            r++;
        }

        return maxlen;
    }
};