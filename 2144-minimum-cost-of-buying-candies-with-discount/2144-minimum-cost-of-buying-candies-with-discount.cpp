class Solution {
public:
    int minimumCost(vector<int>& cost) {
        
        sort(cost.begin(),cost.end());
        int min=0,c=0;
        for(int i=cost.size()-1;i>=0;i--)
        {
            c++;
           if(c%3!=0)
           min+=cost[i];
        }
      return min;
    }
};