class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.length();
        int cnt=0;
        int l=0;
        int r=0;
        int ans=0;

        while(r<n){
            if(s[r]=='a' || s[r]=='e' || s[r]=='i' ||s[r]=='o'||s[r]=='u'){
                cnt++;
            }

            while(r-l+1 > k){
                 if(s[l]=='a' || s[l]=='e' || s[l]=='i' ||
                   s[l]=='o' || s[l]=='u'){
                    cnt--;
                }
               l++;
                
            }
            ans=max(ans,cnt);
            r++;
        }
        return ans;
    }
};