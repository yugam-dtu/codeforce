#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    int max_score = 0;
    int best_left_flip = -1;
    int best_right_flip = -1;
 
    for (int i = 0; i < n; ) {
        if (a[i] == 1) {
            i++;
            continue;
        }
        int L = i;
        int R = i;
        
        // Find the full contiguous segment of non-1s
        while (R + 1 < n && a[R + 1] != 1) {
            R++;
        }
 
        int lb = -1, rb = -1;
 
        // Determine the left anchor (either pre-existing 1 or first -1)
        if (L > 0) lb = L - 1;
        else {
            for (int k = L; k <= R; k++) {
                if (a[k] == -1) { lb = k; break; }
            }
        }
 
        // Determine the right anchor (either pre-existing 1 or last -1)
        if (R < n - 1) rb = R + 1;
        else {
            for (int k = R; k >= L; k--) {
                if (a[k] == -1) { rb = k; break; }
            }
        }
 
        // If both anchors are valid, calculate the potential score
        if (lb != -1 && rb != -1 && lb <= rb) {
            int score = rb - lb + 1;
            if (score > max_score) {
                max_score = score;
                best_left_flip = (lb >= L) ? lb : -1;
                best_right_flip = (rb <= R) ? rb : -1;
            }
        }
        i = R + 1;
    }
 
    // Apply the optimal flips for the best segment
    if (best_left_flip != -1) a[best_left_flip] = 1;
    if (best_right_flip != -1) a[best_right_flip] = 1;
 
    // Convert all remaining -1s to 0s
    for (int i = 0; i < n; i++) {
        if (a[i] == -1) a[i] = 0;
        cout << a[i] << " ";
    }
    cout << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}