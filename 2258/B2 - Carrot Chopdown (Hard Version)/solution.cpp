#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
 
    vector<int> cnt(m + 1, 0);
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        cnt[a]++;
    }
 
    // Prefix sums of counts
    vector<int> pref(m + 1, 0);
    for (int i = 1; i <= m; ++i) {
        pref[i] = pref[i - 1] + cnt[i];
    }
 
    auto get_count = [&](int l, int r) {
        l = max(1, l);
        r = min(m, r);
        if (l > r) return 0;
        return pref[r] - pref[l - 1];
    };
 
    // Precompute S[L] = sum_{v=1}^m floor(v / L) * cnt[v]
    vector<long long> S(m + 1, 0);
    for (int L = 1; L <= m; ++L) {
        for (int j = 1; j * L <= m; ++j) {
            int l = j * L;
            int r = min(m, (j + 1) * L - 1);
            S[L] += 1LL * j * get_count(l, r);
        }
    }
 
    long long max_S = 0;
    for (int L = 1; L <= m; ++L) {
        max_S = max(max_S, S[L]);
    }
 
    vector<long long> ans(m + 1, max_S);
 
    for (int k = 1; k <= min(m, 18); ++k) {
        long long cur_max = 0;
        long long p2 = 1LL << k;
 
        for (int L = 1; L <= m; ++L) {
            if (p2 * L > m) {
                cur_max = max(cur_max, S[L]);
                continue;
            }
 
            long long total = S[L];
            for (long long j = p2; j * L <= m; ++j) {
                int l = j * L;
                int r = min((long long)m, (j + 1) * L - 1);
                long long diff = j - (p2 - 1);
                total -= diff * get_count(l, r);
            }
 
            if (p2 * L <= m) {
                total += cnt[p2 * L];
            }
 
            cur_max = max(cur_max, total);
        }
        ans[k] = cur_max;
    }
 
    for (int k = 1; k <= m; ++k) {
        cout << ans[k] << (k == m ? "" : " ");
    }
    cout << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}