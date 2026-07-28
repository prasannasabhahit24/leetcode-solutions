class Solution {
public:
    string smallestPalindrome(string s) {
         
         int n=s.length();

         int freq[26]={0};


         for(int i=0;i<n/2;i++){
            freq[s[i]-'a']++;
         }

         //then place alphbets in correct order
         int pos=0;

         for(int i=0;i<26;i++){
            while(freq[i] > 0){
                s[pos]=i+'a';

                pos++;

                freq[i]--;
            }
         }
         //then in the second half , copy fst half put it in reverse order in 2nd half
          for(int i=0;i<n/2;i++){
            s[n-1-i]=s[i];
         }

         return s;
    }
};