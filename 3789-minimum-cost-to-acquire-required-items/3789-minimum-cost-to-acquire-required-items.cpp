class Solution {
    using ll = long long;

public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        ll mi = min(need1, need2);
        ll mx = max(need1, need2);

        ll ans1 = 1LL * need1 * cost1 + 1LL * need2 * cost2;

        ll ans2 = mi * costBoth + 
                  1LL * (need1 - mi) * cost1 +
                  1LL * (need2 - mi) * cost2;

        ll ans3 = mx * costBoth;

        return min({ans1, ans2, ans3});
    }
};