class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string fststringdu="";
        string secstringdu="";
        for(string w:word1){
            fststringdu+=w;
        }
        for(string p:word2){
            secstringdu+=p;
        }
        return fststringdu==secstringdu;
    }
};