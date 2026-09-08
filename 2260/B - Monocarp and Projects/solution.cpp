#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
        long long x,y,k;
        cin>>x>>y>>k;
        long long c = y - x; // constant difference each month
        long long ans = 0;
 
        if(x <= c){
            long long a_end = x + k - 1;
            long long loop_end = min(a_end, c);
            for(long long a = x; a <= loop_end; a++){
                ans += c % a;
            }
            long long count_loop = loop_end - x + 1;
            long long remaining = k - count_loop;
            ans += c * remaining;
        } else {
            ans += c * k;
        }
 
        cout << ans << "
";
    }
}