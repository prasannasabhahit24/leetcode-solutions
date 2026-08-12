class Solution {
public:
    int longestSubstring(string s, int k) {
        int n=s.length();
          
        
         unordered_map<int,int> mp;

         if(n<k){
            return 0;
         }
         for(char c:s){
            mp[c]++;
         }

         for(int i=0;i<n;i++){
            if(mp[s[i]] < k){
                string left=s.substr(0,i);
                string right=s.substr(i+1);

                  return max(longestSubstring(left,k),longestSubstring(right,k));
            }

           
         }
         return n;
    }
};