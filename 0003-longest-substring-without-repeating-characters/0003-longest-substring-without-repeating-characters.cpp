class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        vector<int> hash(256,-1);

        int l=0,r=0,maxi=0;
        while(r < n){
            if(hash[s[r]] != -1) {      //i have already seen in this range
                l = max(l, hash[s[r]] + 1);
               //move the lft one by one place   max used for to move forward otherwise it willl move backward which shouldnt 
            }
            int length=r-l+1;
            maxi=max(length,maxi);

            hash[s[r]] =r;    //* Store the index of the current character in the hash table
            r++;
        }
        return maxi;
    }
};