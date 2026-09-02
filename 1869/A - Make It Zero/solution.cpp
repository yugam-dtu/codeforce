/*even=1-n and 1-n 2 tyme
and for odd 1-n-1 1-n-1 and n-1-n for 2 tyme 4*/
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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (arr.size() % 2 == 0)
        {
            cout << 2 << endl
                 << 1 << " " << n << endl
                 << 1 << " " << n << endl;
        }
        else
        {
            cout << 4 << endl
                 << 1 << " " << n - 1 << endl
                 << 1 << " " << n - 1 << endl
                 << n - 1 << " " << n << endl
                 << n - 1 << " " << n << endl;
        }
    }
}