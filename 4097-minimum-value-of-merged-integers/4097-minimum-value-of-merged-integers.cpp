class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        long long ans = LLONG_MAX;

        for(int i=0; i<nums.size(); i+=2) {
            string s = to_string(nums[i]) + to_string(nums[i+1]);

            long long num = stoll(s);

            ans = min(ans, num);
        }

        return ans;
    }
};