class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int n=nums.size();

         nums[0]=1;

        for(int i=1;i<n;i++){
            if(abs(nums[i]-nums[i-1])>1){
                nums[i]=min(nums[i],nums[i-1]+1);
            }
          
        
            
        }

        return nums.back();
    }
};