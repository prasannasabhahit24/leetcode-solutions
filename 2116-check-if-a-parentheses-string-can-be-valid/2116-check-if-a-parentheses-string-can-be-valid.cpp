class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n=s.length();

        if(n%2 != 0) return false;

        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(' || locked[i]=='0'){   //char can be changed
                cnt++;  
            }
            else{
                cnt--;
            }
            if(cnt<0){
                return false;   //too many ))))))))))))
            }
        }

        cnt=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]==')' || locked[i]=='0'){
                cnt++;
            }
            else{
                cnt--;
            }
            if(cnt<0){
                return false;   //too many (((
            }
        }

        return true;
    }
};