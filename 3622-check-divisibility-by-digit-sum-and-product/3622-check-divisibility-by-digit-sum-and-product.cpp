class Solution {
public:
    bool checkDivisibility(int n) {
        int p=1,s=0;
        int temp=n;
        while( temp != 0) {
            int d=temp%10;
             p*=d;
            s+=d;
            temp/=10;

        }
        return n%(s+p)==0;
    }
};