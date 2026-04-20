class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
       
         unordered_map<int,int> mp;
         for(int x:nums){
            mp[x]++;
         }

         for(auto it:mp){
            if(it.second %k == 0 ){
                sum+=it.first*it.second;
            }
            
         }
         return sum;
    }
};