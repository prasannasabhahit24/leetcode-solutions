class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans="";
        for(string w:words){
            int sum=0;

            for(char c:w) {
                int index=c-'a';   //convert to int
                sum+=weights[index];
            }
            int mod=sum%26;

            char mp='z' -mod;
            ans+=mp;
        }
        return ans;
    }
};