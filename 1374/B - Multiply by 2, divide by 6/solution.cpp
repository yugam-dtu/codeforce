#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
 
        int cnt = 0;
        while (n % 3 == 0) {
            if (n % 6 == 0) {
                n /= 6;
            } else {
                n *= 2;
            }
            cnt++;
        }
 
        if (n == 1) cout << cnt << "
";
        else cout << -1 << "
";
    }
    return 0;
}