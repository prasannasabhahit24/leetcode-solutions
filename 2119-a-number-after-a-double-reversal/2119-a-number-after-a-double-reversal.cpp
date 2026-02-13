class Solution {
public:
    bool isSameAfterReversals(int num) {
        int c=num;   //copy
        int rev=0;
        while(c != 0){
            int d=c%10;
           rev=rev*10+d;
           c/=10;
        }
        c= rev;
        int rev2=0;
        while(c != 0){
            int p=c%10;
            rev2=rev2*10+p;
            c/=10;
        }
        return rev2==num;
    }
};