class Solution {
     long long func(vector<int> arr,int hourly){
        long long totalhour=0;
        for(int i=0;i<arr.size();i++){
           totalhour+=ceil((double)arr[i]/(double)hourly);
        }

        return totalhour;
    }
public:

     int minEatingSpeed(vector<int>& nums, int h) {    //program starts
           int n=nums.size();
          int low=1;
         int high=*max_element(nums.begin(),nums.end());
          
         while(low<=high){
            int mid=low+(high-low)/2;
          long long totalhour=func(nums,mid);
            if(totalhour<=h){
              
                high=mid-1;
            }
            else{
                low=mid+1;
            }
         }

         return low;
    }
};