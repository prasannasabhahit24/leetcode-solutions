class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int n=tasks.size();
      
        int finish=0;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            int s=0;
            for(int j=0;j<tasks[i].size();j++){

                s+=tasks[i][j];
            }
             mini=min(mini,s);
        }
        return mini;
    }
};