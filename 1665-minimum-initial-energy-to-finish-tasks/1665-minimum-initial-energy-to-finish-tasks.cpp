class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) {
        sort(tasks.begin(),tasks.end(),[](vector<int>&a,vector<int>&b){
            return (a[1]-a[0])>(b[1]-b[0]);
        });

        int curr=0;


        int ans=0;

        int n=tasks.size();

        for(int i=0;i<n;i++){
            int mini=tasks[i][1]; //minimum enery
            int cost=tasks[i][0];

            if(curr < mini){
                ans+=(mini-curr);

                curr=mini; //update
            }
            curr=curr-cost;
        }
        return ans;
    }
};