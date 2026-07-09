class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
          

          vector<int> compo(n,0);
           int cnt=0;
          for(int i=1;i<n;i++){
             if(nums[i]-nums[i-1]>maxDiff) {
                cnt++;
             }

             compo[i]=cnt;
          }

          vector<bool> sol;


          for(auto &it:queries){
            sol.push_back(compo[it[0]]==compo[it[1]]);
          }
          return sol;
    }
};