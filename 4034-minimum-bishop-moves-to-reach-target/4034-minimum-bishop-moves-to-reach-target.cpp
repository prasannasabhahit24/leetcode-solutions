class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        int r1=source[0];
        int r2=target[0];

        int c1=source[1];
        int c2=target[1];

        int diff1=abs(r1-r2);
        int diff2=abs(c1-c2);

        if(r1==r2 && c1==c2){
            return 0;
        }

        if(diff1==diff2){
            return 1;
        }

        if((r1+c1)%2 != (r2+c2)%2){
            return -1;
        }

        return 2;
    }
};