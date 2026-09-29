class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;

        for(int i=0;i<num.length();i++){
            char digit=num[i];    //current digit

            while(!st.empty() && k > 0 && st.top() > digit){
                st.pop();
                k--;
            }

           st.push(digit);
        }
        //if more elements are there then'
        while(!st.empty() && k > 0){
            st.pop();
            k--;
        }

        if(st.empty()) return "0";

        string res="";
        //push digots from stack to res
        while (!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        //remove zeroes
        while(res.size() > 0 && res.back()=='0'){
            res.pop_back();
        }
        reverse(res.begin(),res.end());
        if(res.empty()) return "0";
        return res;
    }
};