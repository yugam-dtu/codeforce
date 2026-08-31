#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        string s;
        cin >> s;
 
        int cnt = 0, mx = 0;
 
        for (char c : s) {
            if (c == '*') {
                cnt = 0;
            } else {        // '#'
                cnt++;
                mx = max(mx, cnt);
            }
        }
 
        cout << (mx + 1) / 2 << "
";
    }
 
    return 0;
}