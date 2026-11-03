class Solution {
public:
    int minMoves(vector<int>& nums) {
      
        long long moves=0;
        int n=nums.size();
        int maxi=nums[0];
        for(int i=1;i<n;i++){
            maxi=max(maxi,nums[i]);
        }
        for(int i=0;i<n;i++){
           
              moves+=maxi-nums[i];
        }
        return moves;
    }
};