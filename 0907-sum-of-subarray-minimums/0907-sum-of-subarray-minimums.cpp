class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {

        int n = arr.size();
        long long sum = 0;

        int MOD = 1000000007;

        vector<int> left(n);
        vector<int> right(n);

        stack<int> st;

        // Find previous smaller element
        for(int i=0;i<n;i++){

            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }

            if(st.empty()){
                left[i] = -1;
            }
            else{
                left[i] = st.top();
            }

            st.push(i);
        }

        // Clear stack
        while(!st.empty()){
            st.pop();
        }

        // Find next smaller or equal element
        for(int i=n-1;i>=0;i--){

            while(!st.empty() && arr[st.top()] > arr[i]){
                st.pop();
            }

            if(st.empty()){
                right[i] = n;
            }
            else{
                right[i] = st.top();
            }

            st.push(i);
        }

        // Calculate contribution of every element
        for(int i=0;i<n;i++){

            long long l = i - left[i];
            long long r = right[i] - i;

            sum = (sum + arr[i] * l * r) % MOD;
        }

        return sum;
    }
};