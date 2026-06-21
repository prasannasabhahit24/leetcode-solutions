class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n=costs.size();
        int ans=0;
          sort(costs.begin(), costs.end());
        for(int i:costs){
            if(i>coins) break;
             coins-=i;
             ans++;

        }

        return ans;
    }
};