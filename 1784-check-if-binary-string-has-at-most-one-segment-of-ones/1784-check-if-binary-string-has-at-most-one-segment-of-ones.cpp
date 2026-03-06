class Solution {
public:
    bool checkOnesSegment(string s) {
        int zero=0 ;//cnt the no of zero
       int n=s.length();
       
        for(int i=0;i<s.length();i++){
            if(s[i] == '0'){
                zero=1; //1 shouldnot appear after 0
            }
           if(s[i]=='1' && zero==1) {
               return false;
            }
        }
        return true;
    }
};