class Solution {
public:
    vector<int> findClosestElements(vector<int>& nums, int k, int x) {
        int n=nums.size();
        vector<int> ans;
        vector<pair<int,int>> v;

        for(int i=0;i<n;i++){
            v.push_back({abs(nums[i]-x),nums[i]});
        }

        sort(v.begin(),v.end());

        for(int i=0;i<k;i++){
            ans.push_back(v[i].second);
        }
        sort(ans.begin(),ans.end());

      return ans;
    }
};