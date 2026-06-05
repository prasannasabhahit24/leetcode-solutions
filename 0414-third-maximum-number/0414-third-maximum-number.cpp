class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int cnt=1;
       int last=nums[n-1];
       for(int i=n-2;i>=0;i--){
        if(nums[i] != last){
            cnt++;
            last=nums[i];
        }
        if(cnt == 3){
            return last;
        }
       }
       return nums[n-1];  //else second largest
    }
};