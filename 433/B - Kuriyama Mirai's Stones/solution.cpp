#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
 
    vector<int> v1(n);
    for(int i=0;i<n;i++){
        cin >> v1[i];
    }
 
    // orted array once
    vector<int> v3 = v1;
    sort(v3.begin(), v3.end());
 
    //  prefix arrays
    vector<long long> p1(n+1,0), p2(n+1,0);
 
    for(int i=0;i<n;i++){
        p1[i+1] = p1[i] + v1[i];
        p2[i+1] = p2[i] + v3[i];
    }
 
    int m;
    cin >> m;
 
    while(m--){
        int type, l, r;
        cin >> type >> l >> r;
 
        if(type == 1){
            cout << p1[r] - p1[l-1] << "
";
        }
        else{
            cout << p2[r] - p2[l-1] << "
";
        }
    }
}