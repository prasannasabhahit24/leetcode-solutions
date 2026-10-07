class Solution {
private:
void dfs(int node,vector<vector<int>>& adj,vector<int>& vis,vector<int>& ans){
    vis[node]=1;
    ans.push_back(node);
    for(int i=0;i<adj.size();i++){
        if(adj[node][i]==1 && !vis[i]){
            
            dfs(i,adj,vis,ans);
        }
    }
    return;
}  
public:
    int findCircleNum(vector<vector<int>>& adj) {
        int v=adj.size();
       vector<int> vis(v,0);
       vector<int> ans;
       int cnt=0;
       for(int i=0;i<v;i++){
        if(!vis[i]){
            cnt++;
            dfs(i,adj,vis,ans);
        }
       }
       return cnt;
        
    }
};