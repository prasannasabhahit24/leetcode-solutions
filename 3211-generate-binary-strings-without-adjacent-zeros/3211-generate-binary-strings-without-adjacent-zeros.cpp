class Solution {

    private:
    void solve(int n,string s,vector<string>& ans){
        if(s.size()==n){
            ans.push_back(s);
            return;
        }

        if(s.empty() || s.back()!='0'){
            solve(n,s+"0",ans);
        }
        
            solve(n,s+"1",ans);
        
        
    }
public:
    vector<string> validStrings(int n) {
        vector<string> res;
        solve(n,"",res);

        return res;
    }
};