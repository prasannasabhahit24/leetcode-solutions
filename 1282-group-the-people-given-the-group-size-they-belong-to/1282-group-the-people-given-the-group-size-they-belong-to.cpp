class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        unordered_map<int,vector<int>> mp;

         for(int i = 0; i < n; i++){
            mp[nums[i]].push_back(i);
        }

        for(auto it:mp){
            int m=it.first;
            for(int i=0;i<it.second.size();i+=m){
                vector<int> temp;
                for(int j = i; j < i + m; j++){ 
                    temp.push_back(it.second[j]);
              }
              ans.push_back(temp);
            }
        }
   return ans;
    }
};