class Solution{
  public:
    int maxScore(vector<int>& nums , int k){
        //your code goes here

        int n=nums.size();
        int lsum=0;
        int rsum=0;
        int maxsum=0;

        //first fst 4 ekement that is upto k-1th index
        for(int i=0;i<=k-1;i++){
            lsum+=nums[i];

            maxsum=lsum;
        }
       //start inclding right size elements
        int rindex=n-1;

        for(int i=k-1;i>=0;i--){
            lsum-=nums[i];
            rsum+=nums[rindex];
            rindex--;

            maxsum=max(maxsum,lsum+rsum);
        }

        return maxsum;
    }
};