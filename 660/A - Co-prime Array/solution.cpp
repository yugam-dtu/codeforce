#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    vector<long long> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
 
    // backup primes near 1e9
    vector<long long> primes = {
        999999937,
        999999929,
        999999893,
        999999883,
        999999797
    };
 
    vector<long long> result;
    int insertions = 0;
 
    result.push_back(a[0]);
 
    for(int i = 0; i < n - 1; i++)
    {
        if(__gcd(a[i], a[i+1]) != 1)
        {
            // find a prime not equal to neighbors
            for(long long p : primes)
            {
                if(p != a[i] && p != a[i+1])
                {
                    result.push_back(p);
                    insertions++;
                    break;
                }
            }
        }
        result.push_back(a[i+1]);
    }
 
    cout << insertions << "
";
 
    for(long long x : result)
        cout << x << " ";
}