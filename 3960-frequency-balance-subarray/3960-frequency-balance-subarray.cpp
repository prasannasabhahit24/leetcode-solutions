class Solution {
public:
    int getLength(vector<int>& nums) {
        int n=nums.size();
        int ans=1;

        for(int i=0;i<n;i++){
            unordered_map<int,int> freq;

            int maxFreq=0;

            for(int j=i;j<n;j++){
                freq[nums[j]]++;

                maxFreq=max(maxFreq,freq[nums[j]]);

                bool valid=false;

                // only one distinct value
                if(freq.size()==1){
                    valid=true;
                }
                else if(maxFreq%2==0){

                    valid=true;

                    bool hasF=false;      // frequency = maxFreq/2
                    bool has2F=false;     // frequency = maxFreq

                    for(auto it:freq){

                        int s=it.second;

                        if(s!=maxFreq && s!=maxFreq/2){
                            valid=false;
                            break;
                        }

                        if(s==maxFreq/2) hasF=true;
                        if(s==maxFreq)   has2F=true;
                    }

                    // both frequencies must exist
                    valid = valid && hasF && has2F;
                }

                if(valid){
                    ans=max(ans,j-i+1);
                }
            }
        }

        return ans;
    }
};