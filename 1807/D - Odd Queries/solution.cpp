#include <bits/stdc++.h>
 
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<long long>prefixsum(n);
        for(int i=0;i<n;i++){
            if(i==0){
                prefixsum[i]=arr[i];
            }
            else{
                prefixsum[i]=prefixsum[i-1]+arr[i];
            }
        }
 
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
 
            long long rangeSum = prefixsum[r-1] - (l-1>0 ? prefixsum[l-2] : 0LL);
            long long newSum = prefixsum[n-1] - rangeSum + (long long)k*(r-l+1);
 
            if(newSum%2==0){
                cout<<"NO"<<"
";
            }
            else{
                cout<<"YES"<<"
";
            }
        }
    }
}