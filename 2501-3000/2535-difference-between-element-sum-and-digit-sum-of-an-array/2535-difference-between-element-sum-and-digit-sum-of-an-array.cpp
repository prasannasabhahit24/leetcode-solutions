class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int digiSum=0;
        int diff=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];

            while(nums[i] != 0){
                int d=nums[i]%10;
                digiSum+=d;
                nums[i]/=10;
            }
            diff=abs(sum-digiSum);
        }
        return diff;
    }
};