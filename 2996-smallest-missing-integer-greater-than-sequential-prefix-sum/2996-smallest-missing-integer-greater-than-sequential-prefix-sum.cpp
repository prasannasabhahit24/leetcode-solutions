class Solution {
public:
    int missingInteger(vector<int>& nums) {
      
        vector<bool> exists(52);

        for(int i=0;i<nums.size();i++){
            exists[nums[i]]=true;

        }

          int pref=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                pref+=nums[i];
            }
            else{
                break;
            }
        }
        

        if(pref>50){
            return pref;
        }

        for(int i=pref;i<=52;i++){
            if(!exists[i]){
                return i;
            }
        }
        return 0;
    }
};