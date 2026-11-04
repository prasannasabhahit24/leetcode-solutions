class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
       int  index=-1;
       int  max_count=-1;
      int n=mat.size();
      int m=mat[0].size();
      
        for(int i=0;i<n;i++) {
          int count_row=0;
          for(int j=0;j<m;j++) {
            count_row+=mat[i][j];
          }
          if(count_row > max_count){
            max_count=count_row;
            index =i;
          }
        }
        return {index, max_count};
    }
};