class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int> ans;
        vector<int> num;
        vector<int> res;
        
        for(int i=0;i<n;i++){
            if(nums[i]<pivot){
                 ans.push_back(nums[i]);
            }
            else if(nums[i]>pivot){
                num.push_back(nums[i]);
            }
            else{
                res.push_back(nums[i]);
            }
        }
     ans.insert(ans.end(), res.begin(), res.end());
        ans.insert(ans.end(), num.begin(), num.end());

      return ans;
    }
};