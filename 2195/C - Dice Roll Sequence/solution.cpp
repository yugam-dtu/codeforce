#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
 
        vector<int> arr(n);
        for(int i=0;i<n;i++)
            cin >> arr[i];
 
        int changes = 0;
 
        for(int i=1;i<n;i++){
 
            if(arr[i]==arr[i-1] || arr[i]+arr[i-1]==7){
 
                changes++;
 
                // change arr[i] to any valid face
                for(int face=1; face<=6; face++){
 
                    if(face!=arr[i-1] && face+arr[i-1]!=7 &&
                       (i+1>=n || (face!=arr[i+1] && face+arr[i+1]!=7)))
                    {
                        arr[i]=face;
                        break;
                    }
                }
            }
        }
 
        cout<<changes<<endl;
    }
 
    return 0;
}