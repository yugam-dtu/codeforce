#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        vector<string> g(n);
        for (int i = 0; i < n; i++) {
            cin >> g[i];
        }
 
        bool possible = true;
 
        if (g[0][0] != g[n - 1][m - 1]) {
 
            bool sameRows = true;
            for (int j = 1; j < m; j++) {
                if (g[0][j] != g[0][0] ||
                    g[n - 1][j] != g[n - 1][0]) {
                    sameRows = false;
                    break;
                }
            }
 
            bool sameCols = true;
            for (int i = 1; i < n; i++) {
                if (g[i][0] != g[0][0] ||
                    g[i][m - 1] != g[0][m - 1]) {
                    sameCols = false;
                    break;
                }
            }
 
            if (sameRows || sameCols) {
                possible = false;
            }
        }
 
        cout << (possible ? "YES" : "NO") << '
';
    }
 
    return 0;
}