class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>> vis(n,vector<bool>(m,0));
         
          int currrow=0;
          int currcol=0;

            vis[currrow][currcol] = 1;
         while(true){
              int nr=currrow;
              int nc=currcol;
             if(grid[currrow][currcol]=='L') nc--;
             else if(grid[currrow][currcol] == 'R') nc++;
             else if(grid[currrow][currcol]=='U') nr--;

             else {
                nr++;
             }
               
           
             //if outside of grid
                if (nc < 0 || nc >= m || nr < 0 || nr >= n) {
                break;
            }
             if(vis[nr][nc]){
                break;

             }

             
             currrow=nr;
             currcol=nc;
             vis[nr][nc]=1;
         }  
         return  {currrow,currcol};
    }
};