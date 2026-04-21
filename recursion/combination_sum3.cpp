#include <vector>
using namespace std;

class Solution {
private:
    void func(int ind, vector<int>& arr, int sum, vector<vector<int>>& ans, int k) {
        if(sum == 0 && arr.size() == k) {
            ans.push_back(arr);
            return;
        }

        if(sum < 0 || arr.size() > k) return;

        for(int i = ind; i <= 9; i++) {
            arr.push_back(i);
            func(i + 1, arr, sum - i, ans, k);
            arr.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> arr;
        func(1, arr, n, ans, k);
        return ans;
    }
};