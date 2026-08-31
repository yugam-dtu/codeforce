#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        
        int ans = a; // Sabse worst case: 1 shovel ke 'a' packages lena
        
        // a ke divisors find karne ke liye loop (square root of a tak)
        for (int i = 1; i * i <= a; i++) 
        {
            if (a % i == 0) // Agar i, a ko divide karta hai
            {
                // i ek divisor hai, check karo kya ye b se chhota/barabar hai
                if (i <= b) 
                {
                    ans = min(ans, a / i); 
                }
                
                // (a / i) bhi ek divisor hoga, usko bhi check karo
                if (a / i <= b) 
                {
                    ans = min(ans, i);
                }
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}