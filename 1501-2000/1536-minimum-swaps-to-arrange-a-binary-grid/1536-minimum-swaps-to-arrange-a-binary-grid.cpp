class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int> zeroes(n);

        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=n-1;j>=0;j--){
                if(grid[i][j] == 0){
                    cnt++;
                }
                else {
                    break;
                }
             
            }
             zeroes[i]=cnt;
        }
        int swaps=0;
         //fixthe rows
         for(int i=0;i<n;i++){
            int req=n-i-1;
            int j=i;      //start from that row;
            while(j < n && zeroes[j]  < req ) {
                j++;}
            
            if(j==n) return -1;

             while(j>i) {
                swap(zeroes[j],zeroes[j-1]);

                swaps++;
                j--;
             }

         }
         
         return swaps;
    }
};