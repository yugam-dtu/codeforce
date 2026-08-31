#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    string s;
    cin >> s;
 
    int nb, ns, nc;
    cin >> nb >> ns >> nc;
 
    int pb, ps, pc;
    cin >> pb >> ps >> pc;
 
    long long r;
    cin >> r;
 
    int countb = 0, counts = 0, countc = 0;
    for (char c : s) {
        if (c == 'B') countb++;
        else if (c == 'S') counts++;
        else if (c == 'C') countc++;
    }
 
    long long ans = 0;
    long long low = 0, high = 1e13;
 
    while (low <= high) {                     
        long long mid = low + (high - low) / 2;
 
        long long cost =
            max(0LL, countb * mid - nb) * pb +
            max(0LL, counts * mid - ns) * ps +
            max(0LL, countc * mid - nc) * pc;  
 
        if (cost <= r) {                    
            ans = mid;                         
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
 
    cout << ans << endl;
}