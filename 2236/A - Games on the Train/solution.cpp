#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        int mn = INT_MAX;
        int mx = INT_MIN;
 
        for (int i = 0; i < n; i++) {
            int h;
            cin >> h;
 
            mn = min(mn, h);
            mx = max(mx, h);
        }
 
        cout << mx - mn + 1 << '
';
    }
 
    return 0;
}