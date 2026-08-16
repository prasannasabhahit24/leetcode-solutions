class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int op=0;

        unordered_map<int,int> mp;
        for(int i=n-1;i>=0;i--){
            mp[nums[i]]++;

            if(mp[nums[i]] > 1){
                op+=(i/3)+1;
                break;
            }
       }
       

        return op;
    }
};