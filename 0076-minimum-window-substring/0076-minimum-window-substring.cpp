class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.length();
        int m=t.length();

        int hash[256]={0};
        for(int i=0;i<m;i++){
            hash[t[i]]++;
        }

        int cnt=0;
        int minLength=INT_MAX;
        int start=-1;

        int l=0;
        int r=0;

        while(r<n){
            if(hash[s[r]] > 0){
                cnt++;
            }
            hash[s[r]]--;


            while(cnt == m){
                if(r-l+1 < minLength){
                    minLength=r-l+1;
                    start=l;
                }

                //now we have to shrink inorder to get min window
                hash[s[l]]++;
                if(hash[s[l]] > 0){
                    cnt--;
                }
                l++;
            }
            r++;
        }

        return (start==-1) ? "" : s.substr(start,minLength);
    }
};