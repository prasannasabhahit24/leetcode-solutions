class Solution {
public:
    int maxDifference(string s) {
        int n=s.length();
        unordered_map<char,int> mp;
        for(char c:s){
            mp[c]++;
        }
        int cnt1=INT_MAX; //even
        int cnt2=INT_MIN;  //odd
        for(auto it:mp){
            if(it.second %2 ==0) {
                cnt1=min(cnt1,it.second);
            }
            else {
                cnt2=max(cnt2,it.second);
            }
        }
        return cnt2-cnt1;
    }
};