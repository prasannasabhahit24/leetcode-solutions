class Solution {
public:
    bool sumGame(string num) {
        int sum1=0;
        int sum2=0;
        int cnt1=0;
        int cnt2=0;
        int n=num.length();

        for(int i=0;i<n/2;i++){
            if(num[i]=='?'){
                cnt1++;
            }
            else {
                sum1+=num[i]-'0';
            }
        }

        for(int i=n/2;i<n;i++){
            if(num[i]=='?'){
                cnt2++;
            }
            else {
                sum2+=num[i]-'0';
            }
        }
        if ((cnt1 + cnt2) % 2 != 0) return true;
        
        return (sum1 - sum2) * 2 != (cnt2 - cnt1) * 9;
    }
};