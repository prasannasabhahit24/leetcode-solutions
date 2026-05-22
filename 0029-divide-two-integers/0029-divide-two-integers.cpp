class Solution {
public:
    int divide(int dividend, int divisor) {
        //your code goes here
        bool sign=true;
        long ans=0;
        if(dividend==divisor) return 1;
        if(dividend >=0 && divisor < 0){
            sign=false; //if denominator is -ve then it is -ve
        }
        if(dividend<0 && divisor > 0) {
            sign=false;
        }

        long n=abs((long)dividend);
        long d=abs((long)divisor);

        while(n>=d){
           int cnt=0;
            while(n>=(d<<(cnt+1))){
                cnt++;
                
            }
            ans+=(1L<<cnt);
                n=n-(d<<cnt);
        }

        if(ans>INT_MAX && sign){
            return INT_MAX;
        }
         
         if(ans > INT_MAX && !sign){
            return INT_MIN;
        }
        return sign?ans:(-1*ans);
        
    }
};