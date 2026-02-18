class Solution {
public:
    bool checkZeroOnes(string s) {
        int cnt=0;
        int cnt1=0;
        int maxi1=0,maxi2=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                cnt++;
                maxi1=max(maxi1,cnt);
            }
            else {
                cnt=0;
            }
            if(s[i]=='1'){
                cnt1++;

                maxi2=max(maxi2,cnt1);
            }
            else {
                cnt1=0;
            }
            
            
        }
        return maxi2>maxi1;
    }
};