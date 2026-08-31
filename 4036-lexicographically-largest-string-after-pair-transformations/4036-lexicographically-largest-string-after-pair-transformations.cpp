class Solution {
public:
    vector<string> largestString(vector<int>& nums) {
        vector<string> ans;
        for(int x:nums){
            string temp="";
            int l=0;
            while(x > 0 && l<25){
                if(x % 2==1){
                    temp+=char('a'+l);
                }
                x/=2;
                l++;
            }
            while(x > 0){
                temp+='z';
                x--;
            }
            reverse(temp.begin(),temp.end()); //lexography
            ans.push_back(temp);
        }

        return ans;
    }
};