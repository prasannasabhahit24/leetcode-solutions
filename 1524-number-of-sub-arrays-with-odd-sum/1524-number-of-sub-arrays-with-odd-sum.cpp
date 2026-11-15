class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int n=arr.size();
        int mod=1e9+7;
        int cnt=0;
        int prefsum=0;
        int oddcnt=0;
        int evencnt=1;  //since prefsum=0;

        for(int num:arr){
            prefsum+=num;
            if(prefsum % 2==0){
                 cnt+=oddcnt;
                 evencnt++;
            }
            else{
                cnt+=evencnt;
                oddcnt++;
            }
            cnt %=mod;
        }
        return cnt;
    }
};