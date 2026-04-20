class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
         int n=nums.size();
         int alice=0;
         int bob=0;
        for(int i=0;i<n;i++){
            if(nums[i] < 10){
               alice+=nums[i];
            }
         else {
            bob+=nums[i];
         }
        }
        return alice!=bob;
     
    }
};