class Solution {
    private:
    void func(vector<int>& v,int ind,int sum,vector<int>& v2,vector<vector<int>>& ans) {
        if(sum==0) {
            ans.push_back(v2);   //stoe current combination
            return;
        }
        if(sum < 0 || ind==v.size()){
            return ;
        }
        //case1-if we take element
         v2.push_back(v[ind]);
       func(v,ind,sum-v[ind],v2,ans);
      
            v2.pop_back();

       //case 2-if we dont pick that  element u jump to next index
       func(v,ind+1,sum,v2,ans);
  

     

    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> v2;
        func(candidates, 0, target, v2, ans);
        return ans;
    }
};