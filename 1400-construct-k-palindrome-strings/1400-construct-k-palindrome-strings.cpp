class Solution {
public:
    bool canConstruct(string s, int k) {
        int n=s.length();
        int odd=0;
        if(k>n){
            return false;
        }
        if(k==n ) return true;

        unordered_map<char,int> mp;
        for(char c:s){
            mp[c]++;
        }

        for(auto it:mp){
            if(it.second % 2 != 0){
                odd++;
            }
        }

        if(odd>k) return false;
        return true;
    }
};