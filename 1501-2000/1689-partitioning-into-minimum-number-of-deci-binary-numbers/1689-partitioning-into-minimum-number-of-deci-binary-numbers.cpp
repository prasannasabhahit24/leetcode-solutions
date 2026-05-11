class Solution {
public:
    int minPartitions(string n) {
        int maxi=0;
        for(char c:n){
            int temp=c-'0';
            if(temp>maxi){
                maxi=temp;
            }
        }
        return maxi;
    }
};