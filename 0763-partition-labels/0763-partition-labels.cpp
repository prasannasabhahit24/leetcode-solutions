class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n=s.length();
        vector<int> lastOccurrence(26, 0); 
        for (int i = 0; i < s.size(); ++i) { 
            lastOccurrence[s[i] - 'a'] = i; 
        }
        int partiend=0;
        int partistart=0;
        vector<int> ans;
        for(int i=0;i<n;i++){
            partiend=max(partiend,  lastOccurrence[s[i] - 'a']);

            if(i==partiend){
                ans.push_back(i-partistart+1);
                 partistart=i+1;
            }
           
        }

        return ans;
    }
};