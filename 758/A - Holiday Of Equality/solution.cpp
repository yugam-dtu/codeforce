#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    int n;
    cin>>n;
    int a;
    for (int i = 0; i < n; i++)
    {
       cin>>a;
       v.push_back(a);
    }
    int pesa=0;
    int mx = *max_element(v.begin(), v.end());
    for(int j=0;j<n;j++){
        while(v[j]<mx)
        {
            v[j]=v[j]+1;
            pesa=pesa+1;
        }
    }
    cout<<pesa;
}