class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();

        int totalones=0;
        for(int x:nums){
            totalones+=x;
        }

         int currones=0; //find currentones in that first window size toalone
         for(int i=0;i<totalones;i++){
            currones+=nums[i];
         }

         if(totalones==0 || totalones==n) return 0; //edge case

         //now use slinding window
         int maxone=currones;

         for(int i=0;i<n;i++){
            currones-=nums[i];
            
            currones+=nums[(i+totalones) % n]; //make circular 

            maxone=max(maxone,currones);

         }

         return totalones-maxone;
    }
};