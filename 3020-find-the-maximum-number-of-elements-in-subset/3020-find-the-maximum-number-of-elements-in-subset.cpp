using ll=long long;

class Solution {
public:
    int maximumLength(vector<int>& nums) {
        map<ll,int> freq;
        int one=0;


        for(auto it:nums){
            if(it==1){
                one++;
            }
            else{
                freq[it]++;
            }
        }

       // If count of 1's is even,
        // reduce it by 1 because the required sequence length must be odd
        if (one != 0 && one % 2 == 0)
        {
            one--;
        }

        int ans=one;
        for(auto it:freq){
            ll val=it.first;
            ll base=sqrt(val);

            if((base * base==val) && freq.count(base) && freq[base]>1){ 
                continue;
            }
             //if u dont find it
            int cnt=0;
            while(freq.count(val) && freq[val] > 1){
                cnt+=2;

                val=val*1LL*val;
            }

            //if last value exists only once

            if(freq[val]==1){
                cnt++;
            }

            else{
                cnt--;
            }

            ans=max(ans,cnt);
        }
    return ans;


    }
};