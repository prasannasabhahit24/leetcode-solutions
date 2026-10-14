class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum > num * 9){
            return "";
        }

        string ans="";


        //try to filling leftmot digit by 9 t get maxsum
        while(num > 0){
            int d=min(9,sum);
            ans+=to_string(d);
            sum-=d;
            num--;
        }

        return ans;
    }
};