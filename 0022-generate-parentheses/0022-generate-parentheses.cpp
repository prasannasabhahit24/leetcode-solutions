class Solution {
    private:
     void func(int n,int open,int close,string s,vector<string> &ans) {
        if(open==close && (open+close==2*n)) {
            ans.push_back(s);
            return;
        }
         if(open < n) {
            func(n,open+1,close,s+'(',ans);
         }
         if(close < open) {
            func(n,open,close+1,s+')',ans);
         }
        }
    
public:
    vector<string> generateParenthesis(int n) {
       vector<string> ans;
       func(n,0,0,"",ans);
       return ans;
    }

};