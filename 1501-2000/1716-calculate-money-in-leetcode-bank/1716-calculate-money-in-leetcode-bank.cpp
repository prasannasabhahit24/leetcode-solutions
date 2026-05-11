class Solution {
public:
    int totalMoney(int n) {
        int sum=0;
        int m=1;
        int day=0;    //o=monday  6=sunday
        for(int i=1;i<=n;i++){
            sum+=m+day;
            day++;
            if( day ==7){
                day=0;
                m++;
            }
           
        }
        return sum;
    }
};