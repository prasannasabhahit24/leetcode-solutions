class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n=s.length();
        unordered_map<char,int> mp;

        
     
        for(char c:s){
            mp[c]++;
        }

           unordered_map<char,bool> visited;
           string ans="";
        for(char c:s){
             mp[c]--;
           if(visited[c]==true){
            continue;
           }
             //if we want ro remove it must be lesser in lexigraphical order 
             while(!ans.empty() && c<ans.back() && mp[ans.back()]>0){
                visited[ans.back()]=false;
                ans.pop_back();
             }
             ans.push_back(c);
              visited[c]=true;
        }
        return ans;
    }
};