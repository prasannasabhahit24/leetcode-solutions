class Solution {
public:
    string reverseWords(string s) {
       
       string word="";
       string res="";

       for(int i=0;i<=s.length();i++){
        if(i==s.length() ||s[i] ==' ') {
            reverse(word.begin(),word.end());

            res+=word+" ";

            word="";
        }
        else {
            word+=s[i];
        }
       }
       res.pop_back();
       return res;
    }
};