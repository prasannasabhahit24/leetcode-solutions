class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0; // count places where order breaks
        
        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[i - 1]) {
                count++;
            }
        }

        // also check last to first (for rotation point)
        if (nums[n - 1] > nums[0]) count++;

        // array is sorted and rotated if count <= 1
        return count <= 1;
    }
};
