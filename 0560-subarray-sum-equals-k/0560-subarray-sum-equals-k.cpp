class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int prepSum=0;
        int cnt=0;
        unordered_map<int,int> mp;
        mp[0]=1;
        for(int i=0;i<n;i++){
            prepSum+=nums[i];

            int remove=prepSum-k;
            cnt+=mp[remove];

            mp[prepSum]++;
        }
      return cnt;
    }
};