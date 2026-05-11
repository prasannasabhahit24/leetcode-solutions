class Solution {
public:
    int countSeniors(vector<string>& s) {
         int cnt=0;
         int n=s.size();
         for(int i=0;i<n;i++){
            int z=((s[i][11]-'0') *10) +(s[i][12] - '0');

            if(z > 60) {
                cnt++;
            }
         }
         return cnt;
    }
};