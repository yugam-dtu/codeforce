#include <bits/stdc++.h>
using namespace std;
 
// that means all the numbers from 1 to i-1 divide N
// I can take LCM of all numbers from 1 to i-1
 
int main()
{
 
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        // taking input
 
        int i = 1;
        while (n % i == 0) // O(60)
            i++;
        cout << i - 1 << endl;
    }
    return 0;
}