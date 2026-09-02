#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int total=0;
        int odd_count=0;
        for(int i=0;i<n;i++){
            total+=arr[i];
            if(arr[i]%2!=0){
                odd_count++;
            }
        }
        if(total%2!=0){
            cout<<"NO"<<endl;
        }
        else{
            if(odd_count%2==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}