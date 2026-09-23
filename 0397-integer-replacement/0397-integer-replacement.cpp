class Solution {
public:
    int integerReplacement(int n) {
        long long ans=0;

        long long num=n;

        while(num != 1){
            if(num % 2==0){
                num=num/2;
            }
            else if(num ==3 || num % 4==1){
                num-=1;
            }
            else{
                num+=1;
            }
            ans++;
        }

        return ans;
    }
};