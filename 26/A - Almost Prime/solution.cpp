#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int number = 0;
 
    for (int curr = 2; curr <= n; curr++) {
        int x = curr;
        vector<int> primefactors;
 
        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                primefactors.push_back(i);   // Count this prime factor once
 
                while (x % i == 0) {         // Remove all occurrences
                    x /= i;
                }
            }
        }
 
        // If anything is left, it is a prime factor
        if (x > 1)
            primefactors.push_back(x);
 
        if (primefactors.size() == 2)
            number++;
    }
 
    cout << number << endl;
 
    return 0;
}