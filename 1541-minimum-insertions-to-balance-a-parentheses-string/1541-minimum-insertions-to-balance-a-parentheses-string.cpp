class Solution {
public:
    int minInsertions(string s) {
        int n=s.length();
        int ans=0;
        int open=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                open++;
            }
            else{
                if(i < n-1 && s[i+1]==')'){
                    i++;
                }
                else{
                    ans++;
                }

                if(open==0){
                    ans++;
                }
                else{
                    open--;
                }
            }
        }
        ans+=open << 1;
        return ans;
    }
};