class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        unordered_map<int,int> mp;
       int ans=0;
        for(int x: nums1){
            mp[x]++;
        }
        for(int y: nums2){
            if(mp[y] > 0){
                return y;
            }
        }
        
        return -1;
    }
};