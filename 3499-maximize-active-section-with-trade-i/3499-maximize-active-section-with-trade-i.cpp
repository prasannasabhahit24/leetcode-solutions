class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n=s.length();

        int i=0;

        vector<int> zeroblock;
        int totalone=0;

        while(i<n){
            if(s[i]=='1') {
                while(i<n &&s[i]=='1'){
                    totalone++;
                    i++;
                }
            }
            else {
               int cnt=0;  //cnt the no of zero

               while(i<n && s[i]=='0'){
                cnt++;
                i++;
               }

                 zeroblock.push_back(cnt);
            }
          
        }

        int maxi=0;

        for(int i=0;i+1<zeroblock.size();i++){
            maxi=max(maxi,zeroblock[i]+zeroblock[i+1]);
        }

        return totalone+maxi;
    }
};