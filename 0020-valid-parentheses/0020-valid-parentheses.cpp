class Solution {
public:
    bool isValid(string str) {
        stack<char> st;
       int s=str.size();
        for(int i=0;i<s;i++) {
                     if(str[i] == '(' || str[i] == '{' || str[i] == '[') {
                        st.push(str[i]);
                     }
                     else {
                        if(st.empty()) {
                            return false;
                        }
                       else if((st.top() == '(' && str[i] ==  ')') ||
                           (st.top() == '{' && str[i] ==  '}') ||
                           (st.top() == '[' && str[i] ==  ']') ) {
                            st.pop();
                           } else {
                            return false;
                           }
                     }
        } 
        return st.size() ==0;
    }
};