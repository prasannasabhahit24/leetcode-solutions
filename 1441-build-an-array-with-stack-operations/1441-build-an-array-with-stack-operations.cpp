class Solution {
public:
    vector<string> buildArray(vector<int>& nums, int n) {
        int m=nums.size();
        int i=1;
        vector<string> ans;
        for(int k=0;k<m;k++){
            while(i<nums[k]){
                ans.push_back("Push");
                ans.push_back("Pop");
                i++;
            }
            ans.push_back("Push");
            i++;
        }
        return ans;
    }
};