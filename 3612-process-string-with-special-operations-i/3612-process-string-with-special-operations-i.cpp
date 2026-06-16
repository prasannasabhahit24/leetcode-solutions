class Solution {
public:
    string processStr(string s) {
        int n=s.length();


        string ans="";

        for(int i=0;i<n;i++){
            if(s[i]>='a' && s[i]<='z'){
                ans.push_back(s[i]);
            }

            if(s[i]=='#'){
                ans+=ans;
            }

            if(s[i]=='%'){
                reverse(ans.begin(),ans.end());
            }
            if(s[i]=='*'){
                      if(ans.length() != 0){
                        ans.pop_back();
                      }
            }
        }
        return ans;
    }
};