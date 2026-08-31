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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
 
        map<int, int> freq;
        for (int i = 0; i < n; i++)
            freq[v[i]]++;
 
        if (freq.size() > 2)
        {
            cout << "No" << endl;
        }
        else if (freq.size() == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            auto it = freq.begin();
            int c1 = it->second;
            ++it;
            int c2 = it->second;
            int lo = min(c1, c2), hi = max(c1, c2);
            if (lo == n / 2 && hi == (n + 1) / 2)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
}