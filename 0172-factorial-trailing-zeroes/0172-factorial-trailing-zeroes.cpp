class Solution {
public:
    int trailingZeroes(int n) {
        int cnt=0;
        if(n==0) return 0;
        while(n > 0) {
            n/=5;
            cnt+=n;
        }
        return cnt;
    }
};