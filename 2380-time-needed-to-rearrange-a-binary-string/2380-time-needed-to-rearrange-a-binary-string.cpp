class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int t=0;

      
      int zero=0;

      for(int i=0;i<s.length();i++){
        if(s[i]=='0'){
            zero++;
        }
        else if(zero > 0){
            t=max(t+1,zero);
        }
      }
        return t;
    }
};