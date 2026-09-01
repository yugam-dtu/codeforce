#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
 
        int c0 = 0, c1 = 0;
        for (char c : s) (c == '0' ? c0 : c1)++;
 
        int z = 0, o = 0, m = 0; // z=0s seen, o=1s seen in prefix
        for (int i = 0; i < n; i++){
            if (s[i] == '0') z++; else o++;
            // prefix needs 'o' ones and 'z' zeros to be flippable
            if (o <= c0 && z <= c1) m = i + 1;
            else break; // condition only gets harder as prefix grows
        }
 
        cout << n - m << "
";
    }
}