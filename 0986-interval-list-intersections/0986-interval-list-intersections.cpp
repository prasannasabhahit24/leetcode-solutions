class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& fl, vector<vector<int>>& sl) {
        vector<vector<int>> ans;
        int i=0;
        int j=0;

        int n=fl.size();
        int m=sl.size();

        while(i<n && j<m){
            if(fl[i][1]<sl[j][0]) i++;
            else if(sl[j][1]<fl[i][0]) j++;
            else {
                ans.push_back({max(fl[i][0],sl[j][0]),min(fl[i][1],sl[j][1])});
                if(fl[i][1]<=sl[j][1]) i++;
                else j++;
            }
        }
return ans;
    }
};