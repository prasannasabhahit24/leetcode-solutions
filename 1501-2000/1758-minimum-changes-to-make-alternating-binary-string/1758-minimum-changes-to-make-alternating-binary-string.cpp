class Solution {
public:
    int minOperations(string s) {
        int cnt=0;
         int n=s.length();

        for(int i=0;i<n;i++){
            if(i%2 ==0 && s[i]!='0' || i%2 ==1 && s[i] != '1'){
                cnt++;
            }
     
      }
       return min(cnt,n-cnt);
    }
};