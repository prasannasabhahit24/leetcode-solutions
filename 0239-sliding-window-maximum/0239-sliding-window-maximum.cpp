class Solution{
public:
    vector<int> maxSlidingWindow(vector<int> &arr, int k) {
        int n = arr.size();
        vector<int> ans;
        
        deque <int> dq;
        
        for(int i=0; i < n; i++) {
            if (!dq.empty() && dq.front() <= (i-k)) {
                dq.pop_front();
            }
            
            //Maintain the monotonic (decreasing) 
           // order of elements in deque
            while (!dq.empty() && arr[dq.back()] <= arr[i]) {
                dq.pop_back();
            }
            dq.push_back(i);
            
            /* Store the maximum element from 
            the first window possible */
            if (i >= (k-1)) {
                ans.push_back(arr[dq.front()]);
            }
        }
        
        return ans;

    }
};