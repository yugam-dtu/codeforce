#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
 
        long long pos = 0, ans = 0;
        for(int i = 0; i < n; i++){
            long long x;
            cin >> x;
            if(x > 0) pos += x;
            else{
                long long need = -x;
                if(pos >= need) pos -= need;
                else{
                    ans += need - pos;
                    pos = 0;
                }
            }
        }
        cout << ans << "
";
    }
    return 0;
}