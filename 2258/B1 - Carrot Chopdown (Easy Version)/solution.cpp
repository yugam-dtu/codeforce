#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
    
    // Max value of a_i is bounded by m
    vector<int> cnt(2 * m + 1, 0);
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        cnt[a]++;
    }
    
    // suffix_count[L] = number of carrots with size >= L
    vector<int> suffix_count(m + 2, 0);
    for (int i = m; i >= 1; --i) {
        suffix_count[i] = suffix_count[i + 1] + cnt[i];
    }
    
    int ans = 0;
    for (int L = 1; L <= m; ++L) {
        int cur = suffix_count[L];
        if (2 * L <= m) {
            cur += cnt[2 * L];
        }
        ans = max(ans, cur);
    }
    
    cout << ans << "
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