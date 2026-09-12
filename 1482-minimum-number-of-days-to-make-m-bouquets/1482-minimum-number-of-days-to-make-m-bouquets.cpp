class Solution {
    bool possible(vector<int> nums,int day,int k,int m){
        int n=nums.size();
        int ans=0;
        int cnt=0;

        int noofbloom=0;
       

        for(int i=0;i<n;i++){
            if(nums[i] <=day){
                cnt++;
            }
            else{
                noofbloom+=(cnt/k);
                cnt=0;
            }
        }

        noofbloom+=(cnt/k);
        return noofbloom >= m;
    }
public:
    int minDays(vector<int>& nums, int m, int k) {
        int n=nums.size();
        int mini=*min_element(nums.begin(),nums.end());
      int maxi=*max_element(nums.begin(),nums.end());
      int low=mini;
      int high=maxi;
      int ans=-1;
     long long val=m*1ll*k*1ll;

     if(n<val){
        return -1;
     }
      while(low<=high){
        int mid=low+(high-low)/2;

        if(possible(nums,mid,k,m)){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
      }

      return ans;
    }
};