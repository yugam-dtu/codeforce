#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin >> t;   
    int n, k;
    while (t--)
    {
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
 
        }
        int max=v[0];
        for (int i = 0; i < n-1; i++){
            if(v[i+1] - v[i] >max){
               max=v[i+1] - v[i];
            }
        }
        int round=0;
        round=(k-v[n-1])*2;
        if(round>max){
            cout << round << endl;
        }
        else{
 
        cout << max << endl;
        }
    }
}