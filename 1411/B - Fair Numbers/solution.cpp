#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
 
        while (true)
        {
            bool found = true;
            long long k = n;
 
            while (k > 0)
            {
                long long digit = k % 10;
 
                if (digit != 0 && n % digit != 0)
                {
                    found = false;
                    break;
                }
 
                k = k / 10;
            }
 
            if (found)
            {
                cout << n << endl;
                break;
            }
 
            n++;
        }
    }
 
    return 0;
}