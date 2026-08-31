#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        
        
       if (n%2==0){
        cout<<n-3<<" "<<2<<" "<<1<<endl;
       }
       else{
        int temp=n/2;
        if(temp&1) cout<<temp-2<<" "<<temp+2<<" "<<1<<endl;
        else cout<<(n)/2-1<<" "<<(n)/2+1<<" "<<1<<endl;
        //25 11 12 1
        // 25 11 13 1
        //33 15 17 1
        //11  4  6 1
        //13 5 7 1
 
       }
        
    }
 
}