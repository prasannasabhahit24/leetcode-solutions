class Solution {
    bool dfs(int l,int r,int s1,int s2,bool turn,vector<int>& nums){
        if(l>r) return s1>=s2;

        if(turn){
            return dfs(l+1,r,s1+nums[l],s2,false,nums)||
                   dfs(l,r-1,s1+nums[r],s2,false,nums);
        }
        else {
            return dfs(l+1,r,s1,s2+nums[l],true,nums)&&
                   dfs(l,r-1,s1,s2+nums[r],true,nums);
        }
    }
public:
    bool predictTheWinner(vector<int>& nums) {
       return dfs(0,nums.size()-1,0,0,true,nums);
    }
};