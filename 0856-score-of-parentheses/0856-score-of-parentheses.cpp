class Solution {
public:
    int scoreOfParentheses(string s) {
        int n=s.length();
        int ans=0;
        int dep=0;

        for(int i=0;i<n;i++){
            if(s[i]=='('){
                dep++;
            }
            else{
                dep--;
                if(s[i-1]=='('){   //if u got ()
                    ans+=1<<dep;  //2^dep
                }
            }
        }
        return ans;
    }
};