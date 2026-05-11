class Solution {
public:
    int pivotInteger(int n) {
        int total= n*(n+1)/2;
        int x=sqrt(total);
        if(n==1){
            return 1;
        }
        if(x*x == total) return x;
        return -1;

    }
};