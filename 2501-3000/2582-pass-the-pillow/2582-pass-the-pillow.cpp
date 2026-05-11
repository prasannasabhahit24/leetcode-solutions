class Solution {
public:
    int passThePillow(int n, int time) {
        int ind=1;  //index
        int d=1;    //direction
        for(int i=1;i<=time;i++){
            ind+=d;  //update current directionn to index

            if(ind == n){
                d=-1;
            }
            if(ind ==1) d=1;
        }
       return ind;
    }
};