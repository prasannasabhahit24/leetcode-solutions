class Solution {
public:
    int hIndex(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        sort(nums.rbegin(),nums.rend());

        for(int i=0;i<n;i++){
            if(nums[i]>i){
                ans++;
            }
            else{
                break;
            }
        }

        return ans;

    }
};