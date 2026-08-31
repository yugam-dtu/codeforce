#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n,k,q;
    cin >> n >> k >> q;
 
    vector<vector<int>> a(n, vector<int>(2));
    for(int i = 0; i < n; i++){
        cin >> a[i][0] >> a[i][1];
    }
 
    vector<vector<int>> b(q, vector<int>(2));
    for(int i = 0; i < q; i++){
        cin >> b[i][0] >> b[i][1];
    }
 
    int arr[200005] = {0};
 
    // difference array
    for(int i = 0; i < n; i++){
        arr[a[i][0]]++;
        if(a[i][1] + 1 < 200005)
            arr[a[i][1] + 1]--;
    }
 
    // prefix -> actual counts
    for(int i = 1; i < 200005; i++){
        arr[i] += arr[i-1];
    }
 
    // mark good positions
    vector<int> good(200005, 0);
    for(int i = 0; i < 200005; i++){
        if(arr[i] >= k) good[i] = 1;
    }
 
    // prefix of good
    for(int i = 1; i < 200005; i++){
        good[i] += good[i-1];
    }
 
    // answer queries
    for(int i = 0; i < q; i++){
        int l = b[i][0], r = b[i][1];
        cout << good[r] - good[l-1] << '
';
    }
 
    return 0;
}