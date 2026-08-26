class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n=s.length();
       string ans="";
       int ones=0;
       int l=0;
       int r=0;

       while(r < n){
        if(s[r]=='1'){
            ones++;
        }
        
        while(ones > k){
            if(s[l]=='1'){
            ones--;}
            l++;
        }
        
        while(ones==k){
              string temp=s.substr(l,r-l+1);
            
            if(ans==""||
                temp.length()<ans.length() || 
                (temp.length()==ans.length() && temp<ans)){
                ans=temp;
            }

            if(s[l]=='1'){
                ones--;
            }
            l++;
        }

        r++;
       } 

       return ans;
    }
};