#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long w, h;
        cin >> w >> h;
 
        int k1;
        cin >> k1;
        vector<long long> bottom(k1);
        for (int i = 0; i < k1; i++)
            cin >> bottom[i];
 
        int k2;
        cin >> k2;
        vector<long long> top(k2);
        for (int i = 0; i < k2; i++)
            cin >> top[i];
 
        int k3;
        cin >> k3;
        vector<long long> left(k3);
        for (int i = 0; i < k3; i++)
            cin >> left[i];
 
        int k4;
        cin >> k4;
        vector<long long> right(k4);
        for (int i = 0; i < k4; i++)
            cin >> right[i];
 
        long long bottom_max = bottom[k1 - 1] - bottom[0];
        long long top_max = top[k2 - 1] - top[0];
        long long left_max = left[k3 - 1] - left[0];
        long long right_max = right[k4 - 1] - right[0];
 
        long long ans = 0;
 
        ans = max(ans, bottom_max * h);
        ans = max(ans, top_max * h);
        ans = max(ans, left_max * w);
        ans = max(ans, right_max * w);
 
        cout << ans << endl;
    }
 
    return 0;
}