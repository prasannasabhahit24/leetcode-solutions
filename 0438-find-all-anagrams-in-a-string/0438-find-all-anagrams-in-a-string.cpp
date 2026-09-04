class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=s.length();
        int k=p.length();
        unordered_map<char,int> mp;
         unordered_map<char,int> freq;
        vector<int> ans;

       
        for(char c:p){
            freq[c]++;
        }
         
         int j=0;
        for(int i=0;i<n;i++){
            mp[s[i]]++;

            if(i-j+1>k){
                mp[s[j]]--;
                if(mp[s[j]]==0){
                    mp.erase(s[j]);
                }
                j++;

            }

            if(i-j+1==k){
               if(mp==freq){
                ans.push_back(j);
               }
            }
        }
        return ans;
    }
};