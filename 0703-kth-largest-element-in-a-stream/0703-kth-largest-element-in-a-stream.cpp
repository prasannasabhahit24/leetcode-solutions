class KthLargest {
    int p;
    priority_queue<int,vector<int>,greater<int>> pq;  //min heap
public:
  KthLargest(int k, vector<int>& nums) {
       p=k;
    for(int i=0;i<nums.size();i++){
        if(pq.size() < p) {
            pq.push(nums[i]);
        }
        else if(nums[i] > pq.top()){
            pq.pop();
            pq.push(nums[i]);
        }
    }
  }

  int add(int val) {
    if(pq.size() < p) {
            pq.push(val);
 
            return pq.top();
    }
    if(val > pq.top()){
        pq.pop();
        pq.push(val);
    }

    return pq.top();

  }
};