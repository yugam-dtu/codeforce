#define ll long long
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        ll a,b;
        cin>>a>>b;
 
        ll xk,yk,xq,yq;
        cin>>xk>>yk;
        cin>>xq>>yq;
 
        set<pair<ll,ll>> ans;
 
        ans.insert({xk+a, yk+b});
        ans.insert({xk+a, yk-b});
        ans.insert({xk-a, yk+b});
        ans.insert({xk-a, yk-b});
 
        ans.insert({xk+b, yk+a});
        ans.insert({xk+b, yk-a});
        ans.insert({xk-b, yk+a});
        ans.insert({xk-b, yk-a});
 
        int count = 0;
 
        for(auto p : ans){
            ll x = p.first;
            ll y = p.second;
 
            if((abs(x-xq)==a && abs(y-yq)==b) ||
               (abs(x-xq)==b && abs(y-yq)==a)){
                count++;
            }
        }
 
        cout << count << endl;
    }
}