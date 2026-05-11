#include<vector>
using namespace std;

class Solution {
    private:
    void func(int ind,string s,vector<string>& list,vector<vector<string>>& ans) {
        if(ind ==s.size()) {
            ans.push_back(list);
            return;
        }

        for(int j=ind;j<s.size();j++){
            if(isPalidrome(s,ind,j)){
                list.push_back(s.substr(ind,j-ind+1));
                func(j+1,s,list,ans);
                list.pop_back();
            }
        }
    }
    bool isPalidrome(string s,int l,int r){
       while(l<r){
        if(s[l]!=s[r]) return false;
        l++;
        r--;
       }
       return true;
    }

public:
    vector<vector<string> > partition(string s) {
        //your code goes here
        vector<string> list;
        vector<vector<string>> ans;
        func(0,s,list,ans);
        return ans;
    }
};