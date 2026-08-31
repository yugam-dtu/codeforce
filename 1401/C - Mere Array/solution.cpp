#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
 
        int minVal = *min_element(a.begin(), a.end());
        vector<int> b = a;
        sort(b.begin(), b.end());
 
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i] && a[i] % minVal != 0)
            {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << "
";
    }
    return 0;
}