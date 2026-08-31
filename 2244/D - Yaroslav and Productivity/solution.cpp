#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll NEG_INF = -4e18;
 
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        vector<ll> a(n + 1), pre(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            scanf("%lld", &a[i]);
            pre[i] = pre[i - 1] + a[i];
        }
        vector<int> b(m);
        for (int i = 0; i < m; i++) scanf("%d", &b[i]);
        sort(b.begin(), b.end());
 
        // rightmost segment (b[m-1], n] — never touched by any flip
        ll dpPlus = pre[n] - pre[b[m - 1]];
        ll dpMinus = NEG_INF;
 
        for (int k = m - 1; k >= 0; k--) {
            // decide whether to "read" post at b[k] (toggle state)
            ll newPlus  = max(dpPlus, dpMinus);
            ll newMinus = max(dpMinus, dpPlus);
            dpPlus = newPlus;
            dpMinus = newMinus;
 
            int left = (k == 0) ? 0 : b[k - 1];
            ll segSum = pre[b[k]] - pre[left];
            dpPlus  += segSum;
            dpMinus += -segSum;
        }
 
        printf("%lld
", max(dpPlus, dpMinus));
    }
}