class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
       
       int cnt=0;
       int n=nums[nums.size()/2];

       for(int x:nums){
        if(x==n){
            cnt++;
        }
       }

       return cnt==1;
    }
};