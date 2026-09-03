#define ll long long
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
ll a, b, n;
        cin >> a >> b >> n;
 
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
 
        sort(arr.begin(), arr.end());
 
        ll currtime = 1;
        ll maxtime = b-1;
 
        for (ll i = 0; i < n; i++)
        {
            currtime += arr[i];
 
            if (currtime >= a)
            {
                currtime = a;
            }
 
            maxtime += currtime - 1;
            currtime = 1;
        }
 
        cout << maxtime + 1 << endl;
    }
}