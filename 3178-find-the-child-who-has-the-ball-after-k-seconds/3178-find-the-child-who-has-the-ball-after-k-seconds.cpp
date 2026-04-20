class Solution {
public:
    int numberOfChild(int n, int k) {
        int ind=0;  //index
        int d=1;    //direction
        for(int i=1;i<=k;i++){
            ind+=d;  //update current directionn to index

            if(ind == n-1){
                d=-1;
            }
            if(ind ==0) d=1;
        }
       return ind;
    }
};