class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
          
          int longi=1;
          int up=1;
          int down=1;

          for(int i=1;i<n;i++) {
            up=nums[i-1]  < nums[i] ? up+1 :1;
             down = nums[i - 1] > nums[i] ? down + 1 : 1;
             longi=max({longi,up,down});
          }

          return longi;
    }
};