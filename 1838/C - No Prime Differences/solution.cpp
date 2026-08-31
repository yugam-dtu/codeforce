#include <iostream>
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
    
    // Print even indexed rows first (1-based index)
    for (int i = 2; i <= n; i += 2) {
        for (int j = 1; j <= m; j++) {
            cout << (i - 1) * m + j << " ";
        }
        cout << "
";
    }
    
    // Then print odd indexed rows
    for (int i = 1; i <= n; i += 2) {
        for (int j = 1; j <= m; j++) {
            cout << (i - 1) * m + j << " ";
        }
        cout << "
";
    }
    cout << "
";
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}