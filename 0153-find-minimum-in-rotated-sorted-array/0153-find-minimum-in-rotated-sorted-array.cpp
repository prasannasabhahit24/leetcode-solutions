class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0,high=n-1,ans=INT_MAX;

        while(low<=high) {
           int mid=(low+high) / 2;


           if(nums[low] <= nums[high])  {
            ans=min(ans,nums[low]);
            break;
           }   //if entire segment is sorted form

           if(nums[low] <= nums[mid]){    //if left half is sorted
               ans=min(ans,nums[low]);
                low=mid+1;
           }
           else {
            ans=min(ans,nums[mid]);
            high=mid-1;

           }

           

        }
        return ans;
    }
};