class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int s=nums[0];
        int b=nums[n-1];
        int l=1;
        for(int i=1;i<=min(s,b);i++){
            if(s %i == 0 && b %i==0){
               l= i; }
        }
        return l;
    }
};