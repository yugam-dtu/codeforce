#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long maxB = -1, minB = -1;
 
        // MAX buses: use mostly 4-wheelers
        if (n % 4 == 0) {
            maxB = n / 4;
        } else if (n % 4 == 2 && n >= 6) {
            maxB = (n - 6) / 4 + 1;   // one 6-wheeler fixes the remainder
        }
 
        // MIN buses: use mostly 6-wheelers
        if (n % 6 == 0) {
            minB = n / 6;
        } else if (n % 6 == 2 && n >= 8) {
            minB = 2 + (n - 8) / 6;  // two 4-wheelers fix the remainder
        } else if (n % 6 == 4 && n >= 4) {
            minB = 1 + (n - 4) / 6;  // one 4-wheeler fixes the remainder
        }
 
        if (maxB == -1 || minB == -1) cout << -1 << "
";
        else cout << minB << " " << maxB << "
";
    }
}