class Solution {
     long long func(vector<int> arr,int ko){
        long long totalhour=0;
        for(int i=0;i<arr.size();i++){
           totalhour+=arr[i]/ko;
        }

        return totalhour;
    }
public:
    int maximumCandies(vector<int>& nums, long long k) {
        int n=nums.size();
          int low=1;
         int high=*max_element(nums.begin(),nums.end());
          
         while(low<=high){
            int mid=low+(high-low)/2;
          long long totalhour=func(nums,mid);
            if(totalhour>=k){
              
                low=mid+1;
            }
            else{
                high=mid-1;
            }
         }

         return high;
    }
};