#include<bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    int n,w,x,y,z;
 
    cin>>n;
   
    for (int i = n+1; ; i++)
    { w=i%10;
    x=(i/10)%10;
    y=(i/100)%10;
    z=(i/1000)%10;
        if(w!=x && x!=y && y!=z && w!=y && w!=z && x!=z){
            cout<<i<<endl;
            break;
        }
    }
    
    
    return 0;
}