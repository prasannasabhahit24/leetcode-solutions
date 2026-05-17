class Solution {
    private:
    bool dfs(vector<int>& arr,int i){
        if(i<0 || i>=arr.size()||arr[i]<0) return false;

        if(arr[i]==0){
            return true;
        }
         arr[i]*=-1;
         

        bool l=dfs(arr,i-arr[i]);
        bool r=dfs(arr,i+arr[i]);

        return l||r;
    }
public:
    bool canReach(vector<int>& arr, int start) {
        
        return dfs(arr,start);
    }
};