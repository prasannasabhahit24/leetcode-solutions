class Solution {
public:
    bool checkValidString(string s) {
        int minOpen=0,maxOpen=0;

        for(char c:s){
            if(c == '('){
                minOpen++;
                maxOpen++;
            }
            else if(c == ')'){
                minOpen--;
                maxOpen--;
            }
            else {    // Treat '*' as '(', ')' or ''
                  minOpen--;
                  maxOpen++;
            }
            if(maxOpen < 0){
                return false;
            }
            minOpen=max(minOpen,0);  //mini cant be a zero
        }
        return (minOpen==0);
    }
};