#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n, m;
    while (cin >> n >> m) {
        vector<int> a(n), b(m);
        for (auto i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (auto i = 0; i < m; i++) {
            cin >> b[i];
        }
        unsigned long long res = 0;
        decltype(a.size()) i = 0, j = 0;
        while (j < m && i < n) {
            int factor = 0, target = b[j];
            while (j < m && b[j] == target) {
                j++;
                factor++;
            }
            while (i < n && a[i] < target) {
                i++;
            }
            int cnt = 0;
            while (i < n && a[i] == target) {
                i++;
                cnt++;
            }
            res += static_cast<decltype(res)>(factor) * cnt;
        }
        cout << res << endl;
    }
    return 0;
}
