class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char> set;
          int cnt=0;
        for(char c: s){
            if(set.find(c) == set.end()){
                set.insert(c);
                cnt++;
            }
        }
        return cnt;
    }
};