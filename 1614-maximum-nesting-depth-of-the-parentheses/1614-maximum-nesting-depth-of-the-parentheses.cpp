class Solution {
public:
    int maxDepth(string s) {
        int depth=0;
        int maxi=0;
        for(auto c:s){
            if( c=='('){
                depth++;
            }
            if(c ==')'){
                depth--;
            }
          maxi=max(maxi,depth);
            
        }
        return maxi;

        
    }
};