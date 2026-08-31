#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
 
        const long long INF = 1e18;
 
        long long prev_no = 0;   // no swap at i-1
        long long prev_yes = 0;  // swap at i-1
 
        for (int i = 1; i < n; i++) {
            long long cur_no = INF;
            long long cur_yes = INF;
 
            // case 1: no swap at i
            cur_no = min(
                prev_no + abs(a[i] - a[i-1]) + abs(b[i] - b[i-1]),
                prev_yes + abs(a[i] - b[i-1]) + abs(b[i] - a[i-1])
            );
 
            // case 2: swap at i (logically, not actually)
            cur_yes = min(
                prev_no + abs(b[i] - a[i-1]) + abs(a[i] - b[i-1]),
                prev_yes + abs(b[i] - b[i-1]) + abs(a[i] - a[i-1])
            );
 
            prev_no = cur_no;
            prev_yes = cur_yes;
        }
 
        cout << min(prev_no, prev_yes) << "
";
    }
 
    return 0;
}