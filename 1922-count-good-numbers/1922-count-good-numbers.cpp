#define mod 1000000007
class Solution {
    long long power(long long base ,long long exponential){    //(returns x^y)
              
              long long ans=1;
              base%=mod;
              while(exponential > 0){
                if(exponential % 2 ==1){
                    ans=(ans*base) % mod;
                }
                base=(base*base) % mod;
                exponential/=2;
              }
              return ans;
    }
public:
    int countGoodNumbers(long long n) {
    
          long long odd=n/2;
          long long even=(n/2)+(n%2);
          return (power(5,even) * power(4,odd)) % mod;
          
    }
};