class Solution {
    private:
    int func(vector<int>& nums,int goal){
        int l=0;
        int r=0;
        int cnt=0;
       if(goal < 0) return 0;
        int sum=0;
        while(r < nums.size()){
            sum+=nums[r]%2;

            while(sum  > goal ){
                sum-=nums[l]%2;
                l++;
            }
         if(sum<=goal){
            cnt+=(r-l+1);
         }
              r++;
        }
      return cnt;
    }
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return func(nums,k)-func(nums,k-1);
    }
};