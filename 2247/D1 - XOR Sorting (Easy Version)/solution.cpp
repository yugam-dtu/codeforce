#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
// Use a value strictly greater than the maximum possible a_i (10^9)
const int INF = 2e9 + 7;
// Max N will be 2^20 (1048576) since sum of n <= 10^6. 
// Size 2 * N is required for the tree.
const int MAX_NODES = 4194304; 
 
int tree_max[MAX_NODES];
int tree_min[MAX_NODES];
bool is_bad[MAX_NODES];
int bad_count[30];
 
void solve() {
    int n, q;
    if (!(cin >> n >> q)) return;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
 
    // Find the smallest power of 2 that is >= n
    int N = 1;
    int M = 0;
    while (N < n) {
        N *= 2;
        M++;
    }
 
    for (int i = 0; i <= M; ++i) {
        bad_count[i] = 0;
    }
 
    // Initialize leaves
    for (int i = 0; i < n; ++i) {
        tree_max[N + i] = a[i];
        tree_min[N + i] = a[i];
        is_bad[N + i] = false; 
    }
    // Pad remaining leaves up to N with INF
    for (int i = n; i < N; ++i) {
        tree_max[N + i] = INF;
        tree_min[N + i] = INF;
        is_bad[N + i] = false;
    }
 
    // Build the segment tree from bottom to top
    for (int x = N - 1; x > 0; --x) {
        int left = 2 * x;
        int right = 2 * x + 1;
        
        tree_max[x] = max(tree_max[left], tree_max[right]);
        tree_min[x] = min(tree_min[left], tree_min[right]);
        
        // A node is bad if a larger element appears on the left half compared to the right half
        is_bad[x] = tree_max[left] > tree_min[right];
        
        // Find the block size level `p` directly associated with node `x`
        int p = M - 1 - (31 - __builtin_clz(x));
        if (is_bad[x]) {
            bad_count[p]++;
        }
    }
 
    // Lambda to extract the answer based on the maximum faulty level tracked
    auto get_ans = [&]() {
        for (int p = M - 1; p >= 0; --p) {
            if (bad_count[p] > 0) {
                return 1 << p;
            }
        }
        return 0;
    };
 
    
    cout << get_ans();
 
    // Process Q updates
    for (int i = 0; i < q; ++i) {
        int idx, val;
        cin >> idx >> val;
        
        int x = N + idx;
        tree_max[x] = val;
        tree_min[x] = val;
        x /= 2;
        
        int p = 0;
       
        while (x > 0) {
            int left = 2 * x;
            int right = 2 * x + 1;
            int nmax = max(tree_max[left], tree_max[right]);
            int nmin = min(tree_min[left], tree_min[right]);
            bool nbad = tree_max[left] > tree_min[right];
            
           
            if (is_bad[x] != nbad) {
                if (nbad) bad_count[p]++;
                else bad_count[p]--;
                is_bad[x] = nbad;
            }
            tree_max[x] = nmax;
            tree_min[x] = nmin;
            
            x /= 2;
            p++;
        }
        cout << " " << get_ans();
    }
    cout << "
";
}
 
int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}