#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    vector<int> arr(n);
    unordered_map<int,int> pos;
 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        pos[arr[i]] = i + 1; // store 1-based position
    }
 
    int m;
    cin >> m;
    long long vasya = 0, petya = 0;
 
    for (int i = 0; i < m; i++) {
        int q;
        cin >> q;
        int p = pos[q];
        vasya += p;          // searching from start
        petya += (n - p + 1); // searching from end
    }
 
    cout << vasya << " " << petya << "
";
    return 0;
}