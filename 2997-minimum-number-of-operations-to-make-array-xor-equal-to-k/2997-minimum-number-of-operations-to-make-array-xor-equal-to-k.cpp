class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans=0;

       int cnt=0;
        for(int n:nums){
            ans=ans ^ n; // xor of all elements
        }


        while ( k || ans){
            if((k %2) != (ans%2)){
                cnt++;
            }
              k/=2;
        ans/=2;       //these 2 lines remove last bit from both 2 integrs
        }
        

       return cnt;
    }
};