class Solution {
    private:
     int palindrome(int l,int r,string s){
        int cnt=0;
        while(l>=0 && r<s.length() && s[l]==s[r]){
            cnt++;
            l--;
            r++;
        }
        return cnt;
     }
public:
    int countSubstrings(string s) {
        int cnt=0;
        for(int i=0;i<s.length();i++){
            cnt+=palindrome(i,i,s);
            //odd 
            cnt+=palindrome(i,i+1,s); //even
        }
        return cnt;
    }
};