class Solution {
    private:
    int binarySearch(vector<int>& arr,int tar){
        int l=0;
        int r=arr.size()-1;

        while(l<=r){
            int mid=l+(r-l)/2;

            if(arr[mid]==tar){
                
                return mid;


            }
            
            
            
            else if(arr[mid] < tar){
                l=mid+1;
            }
            else {
                r=mid-1;
            }
        }


        return l;
    }
public:
    int lengthOfLIS(vector<int>& nums) {
         vector<int> ans;

         for(int n:nums){
            if(ans.empty() || ans.back() < n){
                ans.push_back(n);
            }
            else {
                int i=binarySearch(ans,n);

                ans[i]=n;
            }
         }
         return ans.size();
    }
};