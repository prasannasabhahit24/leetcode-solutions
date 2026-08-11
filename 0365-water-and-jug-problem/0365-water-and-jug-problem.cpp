class Solution {
public:
    bool canMeasureWater(int x, int y, int t) {
        if(x==t || y==t){
            return true;
        }

        if(x+y<t){
            return false;
        }

        int gc=gcd(x,y);

        if( t%gc==0){
            return true;
        }

        return false;
    }
};