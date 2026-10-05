class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        int n=s.length();
        int ans=0;
        
        int l=0;
        int r=0;
        int cnt=0; //unique char
        unordered_map<char,int> mp;
        unordered_map<string,int> freq;

        while(r< n ){
            mp[s[r]]++;

            if(mp[s[r]]==1){
                cnt++;
            }
            if(r-l+1 == minSize){
                if(cnt<=maxLetters){
                    string sub=s.substr(l,minSize);
                    freq[sub]++;

                    ans=max(ans,freq[sub]);
                }

             mp[s[l]]--;  //moving forward
              if(mp[s[l]]==0){
                mp.erase(s[l]);
                cnt--;
            }
            l++;
            }
           r++;
        }

        return ans;
    }
};