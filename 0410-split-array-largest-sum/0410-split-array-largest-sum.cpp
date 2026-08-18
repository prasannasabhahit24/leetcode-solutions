class Solution {
    private:
    int cnt(vector<int> &nums,int m){
        int n=nums.size();

        int parti=1;
        long long arraysum=0;
        for(int i=0;i<n;i++){
              if(arraysum+nums[i] <= m){
                arraysum+=nums[i];
              }
              else {
                parti++;
                arraysum=nums[i];
              }
        }

        return parti;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();

         int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);

        while(low<=high){
            int mid=(low+high)/2;

            int ans=cnt(nums,mid);

            if(ans > k){
                low=mid+1;
            }
            else {
                high=mid-1;
            }
        }
      return low;
    }
};