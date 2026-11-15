class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;

        for(int i=0;i<n;i++){
            int a=nums[i];
            int mini=nums[i];
            for(int j=i;j<n;j++){
                a&=nums[j];
                 mini=min(mini,nums[j]);

                   if(a==mini){
                cnt++;
            }
            }
          
        }
        return cnt;
    }
};