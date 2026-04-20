class Solution {
public:
    int calPoints(vector<string>& arr) {
        int ans=0;
        vector<int> st;
        int n=arr.size();
        for(int i=0;i<n;i++){ 
             if(arr[i] == "+"){
                st.push_back(st[st.size()-1] + st[st.size()-2]);
             }
          else  if(arr[i] == "D"){
                st.push_back(st.back()*2);   //stack top=st.back
            }
          else  if(arr[i] == "C"){
                st.pop_back();
            }
            else {
                   st.push_back(stoi(arr[i])); 
            }
        }
        while(!st.empty()){
            ans+=st.back();
            st.pop_back();
        }
        return ans;
    }
};