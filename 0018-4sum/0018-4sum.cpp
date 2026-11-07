class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
       vector<vector<int>> ans;
        if(n<4) return ans;
        sort(nums.begin(),nums.end());
        for(int a=0;a<n;a++) {
            if(a>0 && nums[a] == nums[a-1])
            continue; 
            for(int b=a+1;b<n;b++){ 
               if( b >a+1 && nums[b] == nums[b-1] ) 
               continue;
               //remaining target after fixing nums[a],nums[b]
          long long newTarget=(long long )target -nums[a] -nums[b];
          int left = b+1;
          int right=n-1;
        while (left < right) {
             long long sum = nums[left] + nums[right];
             if(sum == newTarget) {
                ans.push_back({nums[a],nums[b],nums[left],nums[right]});
                left ++;
                right--;
               while (left < right && nums[left] == nums[left - 1])
                            left++;
               while (left < right && nums[right] == nums[right + 1])
                            right--;              
 
             }
             else if(sum < newTarget) {
                left++;
             }
             else {
                right--;
             }
        }
    }
        }
    return ans;
}
};