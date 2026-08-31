#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, x, y;
        scanf("%d %d %d", &n, &x, &y);
        vector<int> p(n + 1);
        for (int i = 1; i <= n; i++) scanf("%d", &p[i]);
 
        int g = __gcd(x, y);
        bool ok = true;
        for (int i = 1; i <= n; i++) {
            if (((i - p[i]) % g + g) % g != 0) { ok = false; }
        }
        puts(ok ? "YES" : "NO");
    }
}