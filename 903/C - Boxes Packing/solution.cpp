#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> v1(n);
    for (int i = 0; i < n; i++)
    {
       cin>>v1[i];
    }
    
     map<int,int> freq;
    int maxFreq = 0;
 
    for(int x : v1)
    {
        freq[x]++;
        maxFreq = max(maxFreq, freq[x]);
    }
 
    cout << maxFreq;
    
}