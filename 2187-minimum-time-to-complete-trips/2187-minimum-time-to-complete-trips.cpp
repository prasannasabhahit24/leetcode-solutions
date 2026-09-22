class Solution {
    long long totaltime(vector<int>& arr, long long giventime) {
        int n = arr.size();
        long long sum = 0;

        for(int i = 0; i < n; i++) {
            sum += giventime / arr[i];
        }

        return sum;
    }

public:
    long long minimumTime(vector<int>& time, int totalTrips) {

        long long low = 1;
        long long high = 1e14;

        while(low < high) {
            long long mid = low + (high - low) / 2;

            if(totaltime(time, mid) >= totalTrips) {
                high = mid;
            }
            else {
                low = mid + 1;
            }
        }

        return low;
    }
};