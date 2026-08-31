#include <iostream>
using namespace std;
int main()
{
    // long long n = 1e11;
    // bool prime[n] = {true};
    // prime[0] = prime[1] = false;
    // for (long long i = 2; i * i <= n; i++)
    // {
    //     if (prime[i])
    //     {
    //         for (long long j = i * i; j <= n; j += i)
    //         {
    //             prime[j] = false;
    //         }
    //     }
    // }
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long remain = (a - b) * (a + b);
 
        if ((a - b) != 1)
        {
 
            cout << "NO" << endl;
        }
        else{
        long long num = a + b;
        // check whether num is prime or not
        int cnt = 0;
        for (long long i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                while (num % i == 0)
                {
                    cnt++;
                    num /= i;
                }
            }
        }
        if (num > 1)
        {
            cnt++;
        }
        if (cnt == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }}
    }
}