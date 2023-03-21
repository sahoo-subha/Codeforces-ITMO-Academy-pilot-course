#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    while (cin >> k >> n) {
        vector<int> groups(n);
        for (auto i = 0; i < n; i++) {
            cin >> groups[i];
        }
        auto canForm = [&groups, k](long long cnt) {
            // cout << "--- " << cnt << endl;
            int filled = 0;
            long long last = 0;
            for (const auto &x : groups) {
                if (x + last < cnt) {
                    last += x;
                } else if (x >= cnt) {
                    filled++;
                } else {
                    filled++;
                    last = (x + last) % cnt;
                }
                if (filled >= k) {
                    return true;
                }
            }
            return false;
        };
        long long lo = 0, hi = (long long)*max_element(groups.begin(), groups.end()) * n / k + 1;
        while (lo + 1 < hi) {
            auto mid = lo + (hi - lo) / 2;
            if (canForm(mid)) {
                lo = mid;
            } else {
                hi = mid;
            }
        }
        cout << lo << endl;
    }
    return 0;
}
