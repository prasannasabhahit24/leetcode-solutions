class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        int op=0;
        sort(nums.begin(),nums.end());
        if(n==1) return 0;
        int med=nums[n/2];
        for(int i=0;i<n;i++){
             op+=abs(nums[i]-med);
        }
        return op;
    }
};