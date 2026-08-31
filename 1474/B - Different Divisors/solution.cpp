#include <bits/stdc++.h>
using namespace std;
bool isPrime(int x) {
    if (x <= 1) return false;
    
    // Check for divisors up to the square root of x
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false; // Found a divisor, so it's not prime
        }
    }
    return true; // No divisors found, it is prime
}
int main(){
    int t;
    cin>>t;
    while (t--){
        int d;
        cin>>d;
        int x=1;
        int y =1+d;
        while(!isPrime(y)){
            y++;
        }
 
        int z=y+d;
        while(!isPrime(z)){
            z++;
        }
        cout<<y*z<<endl;
 
    }
    return 0;
}