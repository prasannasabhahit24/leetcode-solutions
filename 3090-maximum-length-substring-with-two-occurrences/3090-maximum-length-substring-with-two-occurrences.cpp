class Solution {
public:
    int maximumLengthSubstring(string s) {
        int freq[256]={0};
        int n=s.length();
        int l=0;
        int len=0;
        for(int i=0;i<n;i++){
            freq[s[i]-'a']++;

            if(freq[s[i]-'a'] <=2){
                len=max(len,i-l+1);
            }
            while(freq[s[i]-'a'] > 2){
                freq[s[l]-'a']--;
                l++;
            }
            
        }

        return len;
    }
};