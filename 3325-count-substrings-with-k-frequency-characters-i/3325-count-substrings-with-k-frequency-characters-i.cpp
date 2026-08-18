class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        int ans=0;
        int l=0;
        int r=0;
        unordered_map<char,int> mp;
        while(r<s.length()){
            mp[s[r]]++;

            while(mp[s[r]] >= k){
                
                ans+=s.length()-r;

                mp[s[l]]--;
                if (mp[s[l]] == 0) {
                    mp.erase(s[l]);
                }

                l++;
            }
            r++;
            
        }

        return ans;
    }
};