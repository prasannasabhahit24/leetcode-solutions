class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int n=trips.size();

        vector<int>passengers(1001,0);
        for(auto t:trips){
            int num=t[0];
            int from=t[1];
            int desti=t[2];

            passengers[from]+=num;
            passengers[desti]-=num;

        }

         int curr=0;
        for(int i=0;i<passengers.size();i++){
            curr+=passengers[i];

            if(curr>capacity){
                return false;
            }
        }
        return true;
    }
};