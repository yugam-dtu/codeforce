#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n, k;
        cin >> n >> k;
 
        vector<int> v(n);
 
        for (int i = 0; i < n; i++)
            cin >> v[i];
 
        if (k > 1)
        {
            cout << "YES
";
        }
        else
        {
            if (is_sorted(v.begin(), v.end()))
                cout << "YES
";
            else
                cout << "NO
";
        }
    }
}