#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        string s;
        cin >> s;
 
        int ans = 0;
        int cnt = 0;
        bool three = false;
 
        for (int i = 0; i < n; i++) {
            if (s[i] == '.') {
                cnt++;
 
                if (cnt >= 3) {
                    three = true;
                }
            } else {
                ans += cnt;
                cnt = 0;
            }
        }
 
        ans += cnt;
 
        if (three)
            cout << 2 << '
';
        else
            cout << ans << '
';
    }
}