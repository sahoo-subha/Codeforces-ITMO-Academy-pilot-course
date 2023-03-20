#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    while (cin >> m >> n) {
        vector<int> t(n), z(n), y(n);
        for (int i = 0; i < n; i++) {
            cin >> t[i] >> z[i] >> y[i];
        }
        auto ballonNum = [&t, &z, &y](int i, int time) {
            auto period = t[i] * z[i] + y[i];
            return time / period * z[i] + min((time % period) / t[i], z[i]);
        };
        auto good = [m, n, &ballonNum](int time) {
            int cnt = 0;
            for (int i = 0; i < n; i++) {
                cnt += ballonNum(i, time);
                if (cnt >= m) {
                    return true;
                }
            }
            return false;
        };
        
        int l = -1;
		int r = m * 200;  // For this problem as m might be 0, set l = -1
        while (l + 1 < r) {
            auto mid = (l+r) / 2;
            if (good(mid)) {
                r = mid;
            } else {
                l = mid;
            }
        }
        cout << r << endl;
        
        auto remaining = m;
        for (int i = 0; i < n; i++) {
            auto num = ballonNum(i, r);
            if (num > remaining) {
                num = remaining;
            }
            remaining -= num;
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
