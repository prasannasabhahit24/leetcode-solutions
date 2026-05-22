class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
         vector<vector<int>> ans;
         int subset=(1<<n);      //2^n
         for(int val=0;val<subset;val++){
            vector<int> res;
            for(int i=0;i<n;i++){
                if(val & (1<<i)){   //if it  is a set
                     res.push_back(nums[i]);
                }
            }
            ans.push_back(res);
         }
        return ans;
    }
};