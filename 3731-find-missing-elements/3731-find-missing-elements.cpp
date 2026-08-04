class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
       int maxi=*max_element(nums.begin(),nums.end());
       int mini=*min_element(nums.begin(),nums.end());

       vector<bool> exists(maxi-mini+1);

       for(int x:nums){
        exists[x-mini]=true;
       }
       vector<int> ans;
       for(int i=0;i<maxi-mini;i++){
        if(!exists[i])
          ans.push_back(i+mini);
       }
        return ans;
    }
};