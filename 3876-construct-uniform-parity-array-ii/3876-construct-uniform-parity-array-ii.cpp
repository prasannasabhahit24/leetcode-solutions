class Solution {
public:
    bool uniformArray(vector<int>& nums) {
      int n=nums.size();
     int odd=0;
     int even=0;

         int minOdd = INT_MAX;
        int minEven = INT_MAX;

      for(int i=0;i<n;i++){
        if(nums[i] % 2 != 0 ){
             odd++;
             minOdd=min(minOdd,nums[i]);
              
        }
        else {
          even++;
         minEven=min(minEven,nums[i]);
        }
      }

      if(even==n){
        return true;
      }
      if(odd==n){
        return true;
      }

      if(minOdd < minEven){
        return true;
      }

     return false;
    }
};