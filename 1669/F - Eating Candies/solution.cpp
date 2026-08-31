#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        int n;
        cin >> n;
 
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
 
        int l = 0;
        int r = n - 1;
 
        long long leftSum = 0;
        long long rightSum = 0;
 
        int ans = 0;
 
        while(l <= r)
        {
            if(leftSum <= rightSum)
            {
                leftSum += v[l];
                l++;
            }
            else
            {
                rightSum += v[r];
                r--;
            }
 
            if(leftSum == rightSum)
            {
                ans = l + (n - 1 - r);
            }
        }
 
        cout << ans << endl;
    }
 
    return 0;
}