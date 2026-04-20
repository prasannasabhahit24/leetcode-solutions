class Solution {
public:
    int pivotIndex(vector<int>& nums) {
         int s=0;
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
        }
        int ls=0;
        for(int i=0;i<nums.size();i++)
        {
            s-=nums[i];
            if(s==ls)
            return i;
            ls+=nums[i];
        }
        return -1;
    }
};