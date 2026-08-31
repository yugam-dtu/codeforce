#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        vector<ll> a(n + 1);
        for (int i = 1; i <= n; i++) scanf("%lld", &a[i]);
 
        bool ok = true;
        ll prefA = 0;
        for (int k = 1; k <= n; k++) {
            prefA += a[k];
            ll needed = (ll)k * (k + 1) / 2;
            if (k < n) {
                if (prefA < needed) ok = false;
            } else {
                // k == n: total sum must be >= n(n+1)/2
                if (prefA < needed) ok = false;
            }
        }
        puts(ok ? "YES" : "NO");
    }
}