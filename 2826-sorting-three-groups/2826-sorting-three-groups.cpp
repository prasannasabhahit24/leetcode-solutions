class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();

        int ans=0;
        int one=0;
        int two=0;
        int three=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                one++;
            }
            else if(nums[i]==2){
                two=max(one,two)+1;
            }
            else{
                three=max({one,two,three})+1;
            }
        }
        int keep=max({one,two,three});
        ans=n-keep;
        return ans;
    }
};