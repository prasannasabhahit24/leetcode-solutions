class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int n=s.length();
        unordered_map<char,int> mp;
          unordered_map<int,int> f;
        for(char c:s){
            mp[c]++;
        }
        for(auto x:mp){
            f[x.second]++;
        }

        return f.size()==1;
    }
};