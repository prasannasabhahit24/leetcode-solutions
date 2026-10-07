class Solution {
public:
    string frequencySort(string s) {
          unordered_map<char, int> freq;        
      
         for(char c:s){
            freq[c]++;
         }

         int n=s.length();
         string ans="";
           
           vector<pair<char,int>> temp;

         for(auto it:freq){
        
             temp.push_back({it.first,it.second});
             
         }
           sort(temp.begin(),temp.end(),[](auto &a,auto &b){
            return a.second> b.second;
           }
            );
           
        for(int i = 0; i < temp.size(); i++){
            for(int j = 0; j < temp[i].second; j++){
                ans += temp[i].first;
            }
        }
         return ans;
    }
};