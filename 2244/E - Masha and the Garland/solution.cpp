#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        int n, q;
        cin >> n >> q;
 
        string s;
        cin >> s;
        s = " " + s; // 1-indexing
 
        vector<int> c(n + 1);
 
        // c[i] = mismatch with pattern 010101...
        for (int i = 1; i <= n; i++) {
            int bit = s[i] - '0';
            int expected = i % 2;
            c[i] = bit ^ expected;
        }
 
        vector<int> start1(n + 1, 0), start0(n + 1, 0);
 
        for (int i = 1; i <= n; i++) {
            if (c[i] == 1 && (i == 1 || c[i - 1] == 0))
                start1[i] = 1;
 
            if (c[i] == 0 && (i == 1 || c[i - 1] == 1))
                start0[i] = 1;
        }
 
        vector<int> pref1(n + 1, 0), pref0(n + 1, 0);
 
        for (int i = 1; i <= n; i++) {
            pref1[i] = pref1[i - 1] + start1[i];
            pref0[i] = pref0[i - 1] + start0[i];
        }
 
        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;
 
            int runs1 = pref1[r] - pref1[l];
            if (c[l] == 1) runs1++;
 
            int runs0 = pref0[r] - pref0[l];
            if (c[l] == 0) runs0++;
 
            if (min(runs1, runs0) <= k)
                cout << "YES
";
            else
                cout << "NO
";
        }
    }
 
    return 0;
}