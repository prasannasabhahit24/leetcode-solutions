class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int maxind=0;
        int minind=0;
        for(int i=1;i<n;i++){
            if(nums[i] < nums[minind]){
                minind=i;
            }
            if(nums[i] > nums[maxind]){
                maxind=i;
            }
        }
        int left = min(minind, maxind);
        int right = max(minind, maxind);

        int op1=right+1;   
        int op2=n-left;  
        int op3=left+1+n-right;

        return min(op1,min(op2,op3));

    }
};