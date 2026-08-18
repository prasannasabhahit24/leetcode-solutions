class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
        int n=s.length();
       int ans=0;
        int l=0;
        int r=0;
        int cntT=0;
        int cntF=0;

        while(r< n){
            if(s[r]=='T'){
                cntT++;
            }
            else{
                cntF++;
            }

            while(min(cntT,cntF) > k){//even for changing smallest one which exceeds window,then shrink
              if(s[l]=='T'){
                cntT--;
              }
              else{
                cntF--;
              }
              l++;

            }

            ans=max(ans,r-l+1);
            r++;
        }

        return ans;
    }
};