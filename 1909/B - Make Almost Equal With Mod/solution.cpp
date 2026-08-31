#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
 
        for(int k = 1; k <= 60; k++){
            set<long long> st;
 
            long long num = (1LL << k);
 
            for(int i = 0; i < n; i++){
                st.insert(v[i] % num);
            }
 
            if(st.size() == 2){
                cout << num << endl;
                break;
            }
        }
    }
}