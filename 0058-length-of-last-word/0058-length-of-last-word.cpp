class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.length()-1;
        int l=0;
        while(i >=0 && s[i] == ' '){
            i--;    //skip spaces ater words
        }
        while(i >=0 && s[i] != ' '){
            l++;
            i--;
        }
        return l;
    }
};