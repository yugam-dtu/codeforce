#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
bool intersection(pair<ll,ll> a, pair<ll,ll> b) {
    ll x1 = a.first, y1 = a.second;
    ll x2 = b.first, y2 = b.second;
 
    ll x = max(x1, x2);
    ll y = min(y1, y2);
 
    return x <= y;
}
 
bool helper(vector<pair<ll,ll>>& arr, ll mid, int n) {
 
    pair<ll,ll> currrange = {0, 0};
 
    for(int i = 0; i < n; i++) {
 
        ll l = arr[i].first;
        ll r = arr[i].second;
 
        pair<ll,ll> temp = {
            max(l, currrange.first - mid),
            min(r, currrange.second + mid)
        };
 
        if(temp.first > temp.second) {
            return false;
        }
 
        currrange = temp;
    }
 
    return true;
}
 
int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while(t--) {
 
        int n;
        cin >> n;
 
        vector<pair<ll,ll>> a(n);
 
        for(int i = 0; i < n; i++) {
            cin >> a[i].first >> a[i].second;
        }
 
        ll low = 0;
        ll high = 1e9;
 
        while(low <= high) {
 
            ll mid = low + (high - low) / 2;
 
            if(helper(a, mid, n)) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
 
        cout << low << '
';
    }
}