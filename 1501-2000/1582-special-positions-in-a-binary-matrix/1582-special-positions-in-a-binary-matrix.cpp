class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();  //col size
        int cnt=0;
        vector<int> row(n,0);
        vector<int> col(m,0);

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
            if(mat[i][j]==1 ){
                row[i]++;
                col[j]++;
            }
            }
        }
       //if the current position is 1 and current row as well as current column contains exactly one occurrence of 1.
       for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
            if(mat[i][j]==1 && row[i]==1 && col[j]==1) {
                cnt++;
            }
         }
       }
       return cnt;
    }
};