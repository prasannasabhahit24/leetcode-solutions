class Solution {
    int noofdays(vector<int>& arr,int capacity){
        int days=1;
        int load=0;
        for(int i=0;i<arr.size();i++){
            if(load+arr[i] > capacity){
                days++;
                load=arr[i];
            }
            else{
                load+=arr[i];
            }
        }
        return days;
    }
public:
    int shipWithinDays(vector<int>& nums, int days) {
        // Your code goes here
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);

        while(low<=high){
            int mid=low+(high-low)/2;
            int totalcap=noofdays(nums,mid);
            if(totalcap<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};