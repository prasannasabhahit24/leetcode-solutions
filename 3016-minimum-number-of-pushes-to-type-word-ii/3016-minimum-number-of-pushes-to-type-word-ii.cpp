class Solution {
public:
    int minimumPushes(string word) {
         int ans=0;

         vector<int> freq(26,0);

         for(int i=0;i<word.length();i++){
             freq[word[i]-'a']++;
         }

         sort(freq.rbegin(),freq.rend());

         for(int i=0;i<26;i++){
            if(freq[i]==0){
                break;
            }
            else{
                ans+=freq[i]*(i / 8 +1);
            }
         }
         return ans;
    }
};