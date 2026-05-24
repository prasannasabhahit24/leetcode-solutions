class Solution {

public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();

        int ind=-1;
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                ind=i;
                break;
            }
        }
        bool ok=true;

        for(int i=0;i<n;i++){
            if(nums[(ind+i)%n] != i){
                ok=false;
                break;
            }
        }
        if(ok){
            //if array is inc sorted then 2 possible ways to have answer 
            //normal ops bring 0 to front...
            int op1=ind;
            // reverse the array once then bring zero to back and rev again...
            int op2=n-ind+2;
            ans=min({ans,op1,op2});

        }
        bool dec=true;

        for(int i=0;i<n;i++){
            int curr=nums[i];
            int nxt=nums[(i+1)%n];
            if((nxt-curr+n)%n != n-1){
                dec=false;
               break;
            }
        }
        if(dec){
            int k=n-1-ind; //rotate left and reverse once

            int op=k+1; //rev fst then rotate
            int kp=n-k+1;

            ans=min({ans,op,kp});
        }
        return ans==INT_MAX?-1:ans;
    }
};