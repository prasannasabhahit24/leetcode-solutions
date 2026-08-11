class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int n=nums.size();

        vector<bool> visited(n,false);
        
        int ans=0;
        for(int i=0;i<n;i++){
             if(visited[i]){
                continue;
             }

             int curr=i;
             int cnt=0;
             while(!visited[curr]){
                visited[curr]=true;
                curr=nums[curr];

                cnt++;
             }
             ans=max(ans,cnt);
        }

        return ans;
    }
};