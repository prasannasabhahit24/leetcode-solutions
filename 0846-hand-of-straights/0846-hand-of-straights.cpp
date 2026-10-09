class Solution {
public:
    bool isNStraightHand(vector<int>& nums, int groupSize) {
        int n=nums.size();
        if( n % groupSize != 0) return false;

        map<int,int> mp;
        for(int num:nums){
            mp[num]++;
        }
       while(!mp.empty()){
          int fst=mp.begin()->first;
        for(int i=0;i<groupSize;i++){
           int nextnumber=fst+i;

           if(mp[nextnumber]==0){
            return false;
           }
           mp[nextnumber]--;

           if(mp[nextnumber]==0){
            mp.erase(nextnumber);
           }
            
           
        }
       
       }
        return true;
    }
};