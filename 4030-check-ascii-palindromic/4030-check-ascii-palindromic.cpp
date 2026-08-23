class Solution {
public:
    bool isPalindromic(string s) {
        string binary="";


        for(char c:s){
            int ascii=int(c);

            string su=bitset<8>(ascii).to_string();
            binary+=su;
        }

        int l=0;
        int r=binary.length()-1;

        while(l<=r){
            if(binary[l] != binary[r]){
                return false;
            }
            l++;
            r--;
        }

        return true;
    }
};