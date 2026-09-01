class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
       
         int target=1;
         
         sort(nums.begin(),nums.end());
        for(int n:nums){
            if(n == target){
                target++;
            }
            else if(n > target){
                return target;
            }
        }
        return target;
    }
};