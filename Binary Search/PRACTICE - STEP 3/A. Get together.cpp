#include <bits/stdc++.h>
using namespace std;

double findMinTime(const vector<int> &x, const vector<int> &v) {
    const auto n = x.size();
    auto canMeet = [&x, &v, n](double time) {
        double left = -1e9, right = 1e9; // initially, the valid range should be the whole range
        for (auto i = 0; i < n; i++) {
            auto l = x[i] - time * v[i];
			auto r = x[i] + time * v[i];
            if (l > right || r < left) {
                return false; // if no overlaping then impossible for i-th citien to arrive in time
            }
            left = max(left, l);
            right = min(right, r);
        }
        return true;
    };
    double lo = -0.1, hi = 1e9;
    const auto iterations = 100;  // at least log(2)(1e9 / 1e-6)
    for (auto i = 0; i < iterations; i++) {
        auto mid = lo + (hi - lo) / 2;
        if (canMeet(mid)) {
            hi = mid;
        } else {
            lo = mid;
        }
    }
    return hi;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    while (cin >> n) {
        vector<int> x(n), v(n);
        for (auto i = 0; i < n; i++) {
            cin >> x[i] >> v[i];
        }
        cout << setprecision(20) << findMinTime(x, v) << endl;
    }
    return 0;
}

