class Solution {
    private:
    void func(int ind,int sum,vector<int>& v,vector<int>& v2,vector<vector<int>>& ans){
        if(sum==0){
            ans.push_back(v2);
            return;
        }
        if(sum < 0 || ind==v.size()){
            return;
        }
        v2.push_back(v[ind]); //whe u take that element
        func(ind+1,sum-v[ind],v,v2,ans);
        v2.pop_back();

        //avoid duplicates if cur elemnt is not picking, next one should be diffrenent
        for(int i=ind+1;i<v.size();i++){
            if(v[i] != v[ind]) {
                func(i,sum,v,v2,ans);
                break;
            }
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> v2;
        sort(candidates.begin(),candidates.end());
        func(0,target,candidates,v2,ans);
        return ans;
    }
};