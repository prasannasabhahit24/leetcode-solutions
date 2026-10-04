class Solution {
public:
    vector<int> topKFrequent(const vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int x:nums){
            mp[x]++;
        }

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> minheap;
        for(auto it:mp){
            minheap.push({it.second,it.first});

            if(minheap.size() > k){
                minheap.pop();
            }
        }

        vector<int> ans;
        while(!minheap.empty()){
            ans.push_back(minheap.top().second);
            minheap.pop();
        }

        return ans;



    }
};