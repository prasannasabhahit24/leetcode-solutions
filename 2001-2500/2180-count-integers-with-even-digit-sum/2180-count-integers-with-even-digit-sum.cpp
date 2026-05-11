class Solution {
public:
    int countEven(int num) {
        int cnt=0;
    
        for(int i=2;i<=num;i++){
            int temp=i;
            int sum=0;
            while( temp != 0){
                int d=temp%10;
                 sum+=d;
                 temp/=10;
                 
            }
            if(sum %2 ==0){
                    cnt++;
                 }
             
        }
        return cnt;
    }
};