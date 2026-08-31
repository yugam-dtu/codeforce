#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        long long x;
        cin >> n >> x;
 
        vector<long long> a(n);
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        long long lo = 1;
        long long hi = 2e9;
        long long ans = 0;
 
        while (lo <= hi) {
            long long mid = lo + (hi - lo) / 2;
 
            long long water = 0;
 
            for (int i = 0; i < n; i++) {
                if (a[i] < mid) {
                    water += mid - a[i];
                }
            }
 
            if (water <= x) {
                ans = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
 
        cout << ans << '
';
    }
}