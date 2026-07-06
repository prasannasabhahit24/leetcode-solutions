class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        
        int maxRange=-1;
        int sum=0;

        for (int num:nums)
         {
            int x=num;
            int mn=9,mx=0;

            while (x>0) 
            {
                int d=x%10;
                mn=min(mn, d);
                mx=max(mx, d);
                x/=10;
            }

            int range=mx-mn;

            if (range > maxRange) 
            {
                maxRange=range;
                sum=num;
            } else if (range==maxRange)
            
             {
                sum+=num;
            }
        }

        return sum;
    }
};