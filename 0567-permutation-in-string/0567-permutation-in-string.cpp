class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.length();
        int m=s2.length();
        int l=0;
        int r=0;
        unordered_map<char,int> mp;
        unordered_map<char,int> freq;

          for(char c:s1){
            mp[c]++;
          }

          while(r< m){
            freq[s2[r]]++;

            while(r-l+1 > n){
                freq[s2[l]]--;

                if(freq[s2[l]]==0){
                    freq.erase(s2[l]);
                }
                l++;
            }

            if(mp==freq){
                return true;
            }
            r++;
          }

          return false;
        
    }
};
